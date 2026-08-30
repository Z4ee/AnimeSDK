#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_METHOD_3_4D1EE61C92B6B511_OFFSET UNITYSDK_OFFSET(0x1C2E4F20)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_METHOD_3_E2EAC38A6877A52F_OFFSET UNITYSDK_OFFSET(0x1C2E4F60)
#define RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E4F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoomRobotGameplayControllerInitialize_TypeDefinitionIndex = 20941;

	class BoomRobotGameplayControllerInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* InteractPointPropID; // 0x18
		::RPG::GameCore::DynamicFloat* BoomCamRangePropID; // 0x20
		::RPG::GameCore::DynamicFloat* Boundary1; // 0x28
		::RPG::GameCore::DynamicFloat* Boundary2; // 0x30
		::RPG::GameCore::DynamicFloat* Boundary3; // 0x38
		::RPG::GameCore::DynamicFloat* Boundary4; // 0x40
		::RPG::GameCore::DynamicFloat* BlockPlayerEnterPropID; // 0x48
		::RPG::GameCore::DynamicFloat* AlertMonsterRangeWhenBoomMiss; // 0x50
		::RPG::GameCore::DynamicFloat* AlertMonsterMinValue; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D1EE61C92B6B511(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_METHOD_3_4D1EE61C92B6B511_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2EAC38A6877A52F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BoomRobotGameplayControllerInitialize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BoomRobotGameplayControllerInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOMROBOTGAMEPLAYCONTROLLERINITIALIZE_METHOD_3_E2EAC38A6877A52F_OFFSET))(a1, a2);
		}
	};
}
