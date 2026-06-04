#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET UNITYSDK_OFFSET(0x194F5250)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_4108B3984677F248_OFFSET UNITYSDK_OFFSET(0x194F5410)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_80B6DC3B9781B800_OFFSET UNITYSDK_OFFSET(0x194F5390)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_9BC42A7C9C25997D_OFFSET UNITYSDK_OFFSET(0x194F5180)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x194F5200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleHasCertainResult_TypeDefinitionIndex = 21341;

	class ByBattleHasCertainResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BC42A7C9C25997D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_9BC42A7C9C25997D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33B01EED912CA497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80B6DC3B9781B800(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_80B6DC3B9781B800_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4108B3984677F248(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_4108B3984677F248_OFFSET))(a1, a2);
		}
	};
}
