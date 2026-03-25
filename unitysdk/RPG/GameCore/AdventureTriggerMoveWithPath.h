#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_METHOD_3_6512DE8FB15A6ECF_OFFSET UNITYSDK_OFFSET(0x16F5D700)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_METHOD_3_E601C3A0FFC65FC7_OFFSET UNITYSDK_OFFSET(0x16F5D820)
#define RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5D7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerMoveWithPath_TypeDefinitionIndex = 19799;

	class AdventureTriggerMoveWithPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* StandardSpeed; // 0x20
		::RPG::GameCore::DynamicString* SpeedCurvePath; // 0x28
		::RPG::GameCore::DynamicFloat* PathGroupID; // 0x30
		::RPG::GameCore::DynamicFloat* PathInstanceID; // 0x38
		::RPG::MVector3 RotateAxis; // 0x40
		::RPG::GameCore::DynamicFloat* RotateSpeed; // 0x50
		::System::Boolean RelativeMovement; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMoveEnd; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6512DE8FB15A6ECF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMoveWithPath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_METHOD_3_6512DE8FB15A6ECF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E601C3A0FFC65FC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerMoveWithPath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerMoveWithPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERMOVEWITHPATH_METHOD_3_E601C3A0FFC65FC7_OFFSET))(a1, a2);
		}
	};
}
