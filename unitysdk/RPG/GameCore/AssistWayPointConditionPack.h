#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointConditionOperator.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_METHOD_2_51B936FC0528402E_OFFSET UNITYSDK_OFFSET(0x1A05FE30)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_METHOD_2_84E23AF723D42FE0_OFFSET UNITYSDK_OFFSET(0x1A05FCF0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05FE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointConditionPack_TypeDefinitionIndex = 18255;

	class AssistWayPointConditionPack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AssistWayPointCondition*>* ConditionList; // 0x10
		::RPG::GameCore::AssistWayPointConditionOperator Operator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84E23AF723D42FE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointConditionPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointConditionPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_METHOD_2_84E23AF723D42FE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_51B936FC0528402E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointConditionPack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointConditionPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITIONPACK_METHOD_2_51B936FC0528402E_OFFSET))(a1, a2);
		}
	};
}
