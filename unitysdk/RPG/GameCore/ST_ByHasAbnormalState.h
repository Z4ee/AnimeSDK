#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_14337D20A862058C_OFFSET UNITYSDK_OFFSET(0x1DB35F50)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_BDB0F8870BEC2FE9_OFFSET UNITYSDK_OFFSET(0x1DB35D80)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_C9816ED3AC092563_OFFSET UNITYSDK_OFFSET(0x1DB35F80)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET UNITYSDK_OFFSET(0x1DB35DC0)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB35DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAbnormalState_TypeDefinitionIndex = 19847;

	class ST_ByHasAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BDB0F8870BEC2FE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_BDB0F8870BEC2FE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7DF28FB497C3CEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14337D20A862058C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_14337D20A862058C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9816ED3AC092563(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_C9816ED3AC092563_OFFSET))(a1, a2);
		}
	};
}
