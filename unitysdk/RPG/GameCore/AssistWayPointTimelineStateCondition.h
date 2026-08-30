#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_33B24377368BB631_OFFSET UNITYSDK_OFFSET(0x1C579250)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_59F1D4838EAE8745_OFFSET UNITYSDK_OFFSET(0x1C579220)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_64F964446033A637_OFFSET UNITYSDK_OFFSET(0x1C5750B0)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_F862E767628588F0_OFFSET UNITYSDK_OFFSET(0x1C574400)
#define RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5743F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointTimelineStateCondition_TypeDefinitionIndex = 18777;

	class AssistWayPointTimelineStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::String* TargetTimelineState; // 0x18
		::System::Boolean UseLogicProp; // 0x20
		::System::UInt32 LogicWayPointGroupID; // 0x24
		::System::UInt32 LogicWayPointEntityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59F1D4838EAE8745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_59F1D4838EAE8745_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F862E767628588F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_F862E767628588F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64F964446033A637(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_64F964446033A637_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_33B24377368BB631(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointTimelineStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointTimelineStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTTIMELINESTATECONDITION_METHOD_3_33B24377368BB631_OFFSET))(a1, a2);
		}
	};
}
