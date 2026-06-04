#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_5D76A6D908D8CEFE_OFFSET UNITYSDK_OFFSET(0x19C10F70)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_9D31DC0DE1588100_OFFSET UNITYSDK_OFFSET(0x19C11040)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_B3E00A57D2A703F9_OFFSET UNITYSDK_OFFSET(0x19C11250)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_CD82A4A1A9E208FD_OFFSET UNITYSDK_OFFSET(0x19C111D0)
#define RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C10FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByContainAbnormalState_TypeDefinitionIndex = 18960;

	class ST_ByContainAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5D76A6D908D8CEFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_5D76A6D908D8CEFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D31DC0DE1588100(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_9D31DC0DE1588100_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD82A4A1A9E208FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_CD82A4A1A9E208FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3E00A57D2A703F9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByContainAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByContainAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYCONTAINABNORMALSTATE_METHOD_4_B3E00A57D2A703F9_OFFSET))(a1, a2);
		}
	};
}
