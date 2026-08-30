#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectPreloadLinkConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTINSTANCECONFIG_METHOD_2_F5D9A00FC5925067_OFFSET UNITYSDK_OFFSET(0x1D0535A0)
#define RPG_GAMECORE_EFFECTINSTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D053830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectInstanceConfig_TypeDefinitionIndex = 16170;

	class EffectInstanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* EffectTypes; // 0x10
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::Il2CppArray<::System::String*>* EffectInstanceList; // 0x20
		::Il2CppArray<::System::String*>* ModelInstanceList; // 0x28
		::Il2CppArray<::System::String*>* AssetList; // 0x30
		::Il2CppArray<::RPG::GameCore::EffectPreloadLinkConfig*>* PreloadLinkList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTINSTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F5D9A00FC5925067(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectInstanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectInstanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTINSTANCECONFIG_METHOD_2_F5D9A00FC5925067_OFFSET))(a1, a2);
		}
	};
}
