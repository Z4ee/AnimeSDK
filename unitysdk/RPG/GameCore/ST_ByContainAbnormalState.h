#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_6BD09B641D617F95_OFFSET UNITYSDK_OFFSET(0x1B7790A0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_9D31DC0DE1588100_OFFSET UNITYSDK_OFFSET(0x1B7790E0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_B51D1BE0A5BAE730_OFFSET UNITYSDK_OFFSET(0x1B779270)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_E5CCAE69EE03E0C7_OFFSET UNITYSDK_OFFSET(0x1B7792A0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7790D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByContainAbnormalState_TypeDefinitionIndex = 19310;

	class ST_ByContainAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6BD09B641D617F95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_6BD09B641D617F95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D31DC0DE1588100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_9D31DC0DE1588100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B51D1BE0A5BAE730(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_B51D1BE0A5BAE730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5CCAE69EE03E0C7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_E5CCAE69EE03E0C7_OFFSET))(a1, a2);
		}
	};
}
