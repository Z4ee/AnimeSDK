#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_18ADC697CA3F92EB_OFFSET UNITYSDK_OFFSET(0x1C578460)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_30496A545DFDD1DE_OFFSET UNITYSDK_OFFSET(0x1C573F70)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_529297A677680B7F_OFFSET UNITYSDK_OFFSET(0x1C578490)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_F5AD1D6CD9F51981_OFFSET UNITYSDK_OFFSET(0x1C575050)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C573F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropStateCondition_TypeDefinitionIndex = 18773;

	class AssistWayPointPropStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::PropState TargetPropState; // 0x18
		::System::Boolean UseLogicProp; // 0x1C
		::System::UInt32 LogicWayPointGroupID; // 0x20
		::System::UInt32 LogicWayPointEntityID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18ADC697CA3F92EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointPropStateCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointPropStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_18ADC697CA3F92EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30496A545DFDD1DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_30496A545DFDD1DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5AD1D6CD9F51981(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_F5AD1D6CD9F51981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_529297A677680B7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPSTATECONDITION_METHOD_3_529297A677680B7F_OFFSET))(a1, a2);
		}
	};
}
