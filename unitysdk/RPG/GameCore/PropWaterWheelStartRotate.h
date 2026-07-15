#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_METHOD_3_78259B6F756C5BFA_OFFSET UNITYSDK_OFFSET(0x1B9A6BE0)
#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_METHOD_3_D7ECAC382C05D40C_OFFSET UNITYSDK_OFFSET(0x1B9A6CF0)
#define RPG_GAMECORE_PROPWATERWHEELSTARTROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A6C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropWaterWheelStartRotate_TypeDefinitionIndex = 21344;

	class PropWaterWheelStartRotate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetDock; // 0x20
		::RPG::GameCore::DynamicFloat* TargetStopPoint; // 0x28
		::RPG::GameCore::DynamicFloat* RotateSpeed; // 0x30
		::System::Boolean IsClockwise; // 0x38
		::System::Boolean AutoClockwise; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78259B6F756C5BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWaterWheelStartRotate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWaterWheelStartRotate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_METHOD_3_78259B6F756C5BFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7ECAC382C05D40C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWaterWheelStartRotate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWaterWheelStartRotate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWATERWHEELSTARTROTATE_METHOD_3_D7ECAC382C05D40C_OFFSET))(a1, a2);
		}
	};
}
