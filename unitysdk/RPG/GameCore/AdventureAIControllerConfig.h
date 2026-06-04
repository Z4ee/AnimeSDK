#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_METHOD_2_FBE0A6606F965EBA_OFFSET UNITYSDK_OFFSET(0x1943E980)
#define RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1943ED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAIControllerConfig_TypeDefinitionIndex = 16574;

	class AdventureAIControllerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HasTurn; // 0x10
		::System::Boolean AllowAlertTurnInPlace; // 0x11
		::System::Boolean HasWalkStop; // 0x12
		::System::Boolean HasRunStop; // 0x13
		::System::Single TriggerTurnThresholdOnFacing; // 0x14
		::System::Single TriggerTurnThresholdOnMove; // 0x18
		::System::Single WalkStopTurnThreshold; // 0x1C
		::System::Single RunStopTurnThreshold; // 0x20
		::System::String* RootMotionBakedConfigPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FBE0A6606F965EBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAIControllerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAIControllerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAICONTROLLERCONFIG_METHOD_2_FBE0A6606F965EBA_OFFSET))(a1, a2);
		}
	};
}
