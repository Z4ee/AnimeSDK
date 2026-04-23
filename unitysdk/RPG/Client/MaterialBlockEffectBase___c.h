#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA86B0E0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA86B110)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0xA86B120)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase___c_TypeDefinitionIndex = 65140;

	class MaterialBlockEffectBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MaterialBlockEffectBase___c** StaticGet___9()
		{
			return (::RPG::Client::MaterialBlockEffectBase___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialBlockEffectBase___c_TypeDefinitionIndex)->GetStaticField(0x2EE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__35_0(::System::String* s)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET))(this, s);
		}
	};
}
