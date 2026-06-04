#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_36F2B33413CF97C8_OFFSET UNITYSDK_OFFSET(0x19480BF0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_4B5AEDA150124F72_OFFSET UNITYSDK_OFFSET(0x194836D0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_8E2251DA07BECCFE_OFFSET UNITYSDK_OFFSET(0x19481BF0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_91D243847CFCB8D7_OFFSET UNITYSDK_OFFSET(0x19483700)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19480BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropEraFlipShowCondition_TypeDefinitionIndex = 18048;

	class AssistWayPointPropEraFlipShowCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::Boolean TargetPropEraFlipShow; // 0x18
		::System::Boolean UseLogicProp; // 0x19
		::System::UInt32 LogicWayPointGroupID; // 0x1C
		::System::UInt32 LogicWayPointEntityID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B5AEDA150124F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_4B5AEDA150124F72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36F2B33413CF97C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_36F2B33413CF97C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E2251DA07BECCFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_8E2251DA07BECCFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91D243847CFCB8D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_91D243847CFCB8D7_OFFSET))(a1, a2);
		}
	};
}
