#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBFB5C10)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB5C40)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0xBFB5C50)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase___c_TypeDefinitionIndex = 66067;

	class MaterialBlockEffectBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MaterialBlockEffectBase___c** StaticGet___9()
		{
			return (::RPG::Client::MaterialBlockEffectBase___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialBlockEffectBase___c_TypeDefinitionIndex)->GetStaticField(0x575C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__35_0(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET))(this, a1);
		}
	};
}
