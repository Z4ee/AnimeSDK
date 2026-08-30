#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_METHOD_3_4621B09EA992D19C_OFFSET UNITYSDK_OFFSET(0x1CD565C0)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_METHOD_3_53E556736028A6F6_OFFSET UNITYSDK_OFFSET(0x1CD56620)
#define RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56610)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbilityTargetSelector_FireTargetConfig_TypeDefinitionIndex = 10277;

	class RoadRashGameAbilityTargetSelector_FireTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::FixPoint MinRadius; // 0x10
		::RPG::GameCore::FixPoint MaxRadius; // 0x18
		::RPG::GameCore::FixPoint FanAngle; // 0x20
		::System::String* CurrentLevelAttributeName; // 0x28
		::RPG::GameCore::FixPoint MultiTargetMinLevel; // 0x30
		::System::String* Lv3ToggleName; // 0x38
		::RPG::GameCore::FixPoint Lv3MinRadius; // 0x40
		::RPG::GameCore::FixPoint Lv3MaxRadius; // 0x48
		::RPG::GameCore::FixPoint Lv3FanAngle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4621B09EA992D19C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_METHOD_3_4621B09EA992D19C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53E556736028A6F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbilityTargetSelector_FireTargetConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYTARGETSELECTOR_FIRETARGETCONFIG_METHOD_3_53E556736028A6F6_OFFSET))(a1, a2);
		}
	};
}
