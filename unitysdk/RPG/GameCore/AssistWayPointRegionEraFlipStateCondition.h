#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_1F434A0C0ACE8A81_OFFSET UNITYSDK_OFFSET(0x1C575080)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_7C28C445A8417C7F_OFFSET UNITYSDK_OFFSET(0x1C578D10)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_C5E536C486A9FAD5_OFFSET UNITYSDK_OFFSET(0x1C578CE0)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_DFAFD709052B7B08_OFFSET UNITYSDK_OFFSET(0x1C574220)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C574210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointRegionEraFlipStateCondition_TypeDefinitionIndex = 18775;

	class AssistWayPointRegionEraFlipStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::EraStateType TargetRegionEraFlipState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5E536C486A9FAD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_C5E536C486A9FAD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFAFD709052B7B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_DFAFD709052B7B08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F434A0C0ACE8A81(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_1F434A0C0ACE8A81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C28C445A8417C7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_7C28C445A8417C7F_OFFSET))(a1, a2);
		}
	};
}
