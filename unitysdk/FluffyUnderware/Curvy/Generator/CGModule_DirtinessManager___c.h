#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52FFE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E530020)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0x1E530030)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_1_OFFSET UNITYSDK_OFFSET(0x1E530060)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_DirtinessManager___c_TypeDefinitionIndex = 38901;

	class CGModule_DirtinessManager___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Generator::CGModule_DirtinessManager___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::CGModule_DirtinessManager___c**)Il2CppClass::FromTypeDefinitionIndex(CGModule_DirtinessManager___c_TypeDefinitionIndex)->GetStaticField(0x295F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__16_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_0_OFFSET))(this, m);
		}

		::System::Void __cctor_b__16_1(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_1_OFFSET))(this, m);
		}
	};
}
