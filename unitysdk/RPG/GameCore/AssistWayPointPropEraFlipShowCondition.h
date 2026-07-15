#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_36F2B33413CF97C8_OFFSET UNITYSDK_OFFSET(0x1A05E810)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_4B5AEDA150124F72_OFFSET UNITYSDK_OFFSET(0x1A0626C0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_8E2251DA07BECCFE_OFFSET UNITYSDK_OFFSET(0x1A05FB80)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_C1C0B574A95D2C90_OFFSET UNITYSDK_OFFSET(0x1A0626F0)
#define RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05E800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointPropEraFlipShowCondition_TypeDefinitionIndex = 18252;

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

		static ::System::Void Method_3_C1C0B574A95D2C90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTPROPERAFLIPSHOWCONDITION_METHOD_3_C1C0B574A95D2C90_OFFSET))(a1, a2);
		}
	};
}
