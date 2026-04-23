#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResidentEffectConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_RESIDENTEFFECTCONFIG_METHOD_2_7CAB8C0FA3765E50_OFFSET UNITYSDK_OFFSET(0x18CAC350)
#define RPG_GAMECORE_RESIDENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResidentEffectConfig_TypeDefinitionIndex = 15656;

	class ResidentEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* IgnorePrefixList; // 0x10
		::Il2CppArray<::System::String*>* IgnoreSuffixList; // 0x18
		::Il2CppArray<::RPG::GameCore::ResidentEffectConfigItem*>* ConfigList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7CAB8C0FA3765E50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResidentEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResidentEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESIDENTEFFECTCONFIG_METHOD_2_7CAB8C0FA3765E50_OFFSET))(a1, a2);
		}
	};
}
