#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEMONSTERALERTCONFIG_METHOD_2_B875C83290658C47_OFFSET UNITYSDK_OFFSET(0x1D27A790)
#define RPG_GAMECORE_MAZEMONSTERALERTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27AAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeMonsterAlertConfig_TypeDefinitionIndex = 16226;

	class MazeMonsterAlertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MazeAlertRTPCRangeMin; // 0x10
		::System::Single MazeAlertRTPCRangeMax; // 0x14
		::System::Single MazeAlertRTPCSmoothSpeed; // 0x18
		::System::String* NPCMonsterHintDefaultEvent; // 0x20
		::System::Single NPCMonsterHintDefaultRange; // 0x28
		::System::String* MazeStateGroupName; // 0x30
		::System::String* MazeStateBusy; // 0x38
		::System::String* MonsterAlertLevelSwitchGroup; // 0x40
		::System::String* MonsterAlertLevelAlertSwitch; // 0x48
		::System::String* MonsterAlertLevelDisarmSwitch; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEMONSTERALERTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B875C83290658C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeMonsterAlertConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeMonsterAlertConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEMONSTERALERTCONFIG_METHOD_2_B875C83290658C47_OFFSET))(a1, a2);
		}
	};
}
