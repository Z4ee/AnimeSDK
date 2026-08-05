#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9312F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F931330)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F931340)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_DIRTINESSMANAGER___C___CCTOR_B__16_1_OFFSET UNITYSDK_OFFSET(0x1F931370)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_DirtinessManager___c_TypeDefinitionIndex = 39716;

	class CGModule_DirtinessManager___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Generator::CGModule_DirtinessManager___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::CGModule_DirtinessManager___c**)Il2CppClass::FromTypeDefinitionIndex(CGModule_DirtinessManager___c_TypeDefinitionIndex)->GetStaticField(0x2AF20);
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
