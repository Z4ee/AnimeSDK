#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERMOVE_METHOD_3_6BAF0F94EFFC1CDA_OFFSET UNITYSDK_OFFSET(0x1AE64970)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVE_METHOD_3_F6189DB2FDF0EDAE_OFFSET UNITYSDK_OFFSET(0x1AE64700)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE64910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMove_TypeDefinitionIndex = 19404;

	class AdventureTriggerMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MoveEntityType; // 0x18
		::RPG::GameCore::TargetEvaluator* MoveDestTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* MaxDuration; // 0x28
		::RPG::GameCore::DynamicFloat* MaxSpeed; // 0x30
		::RPG::GameCore::DynamicFloat* MinSpeed; // 0x38
		::System::String* SpeedCurve; // 0x40
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x48
		::RPG::GameCore::DynamicFloat* MaxSteerSpeed; // 0x50
		::System::String* MaxSteerSpeedCurve; // 0x58
		::System::Boolean CanPlayerControl; // 0x60
		::System::Boolean AutoMove; // 0x61
		::RPG::GameCore::DynamicFloat* Acceleration; // 0x68
		::System::Boolean IsStop; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6189DB2FDF0EDAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE_METHOD_3_F6189DB2FDF0EDAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BAF0F94EFFC1CDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVE_METHOD_3_6BAF0F94EFFC1CDA_OFFSET))(a1, a2);
		}
	};
}
