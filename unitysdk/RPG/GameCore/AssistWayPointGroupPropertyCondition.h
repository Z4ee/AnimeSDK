#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_050F0D8CA83D07BD_OFFSET UNITYSDK_OFFSET(0x1CE25F50)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_26FD83A6118EFB0B_OFFSET UNITYSDK_OFFSET(0x1CE27890)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_A42E908E5F4970DB_OFFSET UNITYSDK_OFFSET(0x1CE278C0)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_EE2706CC8A8F613F_OFFSET UNITYSDK_OFFSET(0x1CE249C0)
#define RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE249B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointGroupPropertyCondition_TypeDefinitionIndex = 18778;

	class AssistWayPointGroupPropertyCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::GroupPropertyConfig* TargetGroupProperty; // 0x18
		::System::Boolean UseLogicGroup; // 0x20
		::System::UInt32 LogicWayPointGroupID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_26FD83A6118EFB0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_26FD83A6118EFB0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE2706CC8A8F613F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_EE2706CC8A8F613F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_050F0D8CA83D07BD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_050F0D8CA83D07BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A42E908E5F4970DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointGroupPropertyCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTGROUPPROPERTYCONDITION_METHOD_3_A42E908E5F4970DB_OFFSET))(a1, a2);
		}
	};
}
