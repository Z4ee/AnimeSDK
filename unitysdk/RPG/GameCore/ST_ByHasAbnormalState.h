#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_2DB162E74DFC7EA2_OFFSET UNITYSDK_OFFSET(0x19C13920)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_7361ED4ED0161B55_OFFSET UNITYSDK_OFFSET(0x19C13C00)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_9CB779A694868211_OFFSET UNITYSDK_OFFSET(0x19C13B80)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET UNITYSDK_OFFSET(0x19C139F0)
#define RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C139A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAbnormalState_TypeDefinitionIndex = 18956;

	class ST_ByHasAbnormalState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterUnitState>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2DB162E74DFC7EA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_2DB162E74DFC7EA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D7DF28FB497C3CEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_D7DF28FB497C3CEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CB779A694868211(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_9CB779A694868211_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7361ED4ED0161B55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAbnormalState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAbnormalState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASABNORMALSTATE_METHOD_4_7361ED4ED0161B55_OFFSET))(a1, a2);
		}
	};
}
