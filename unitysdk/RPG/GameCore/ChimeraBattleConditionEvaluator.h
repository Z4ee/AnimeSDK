#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERABATTLECONDITIONEVALUATOR_METHOD_2_F785F9F259F5F99E_OFFSET UNITYSDK_OFFSET(0x187EFEB0)
#define RPG_GAMECORE_CHIMERABATTLECONDITIONEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x187F3830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleConditionEvaluator_TypeDefinitionIndex = 14999;

	class ChimeraBattleConditionEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetPrefixType Prefix; // 0x10
		::RPG::GameCore::ChimeraBattleTargetType Target; // 0x14
		::RPG::GameCore::ChimeraBattleActionType OnWhichAction; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Params; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECONDITIONEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F785F9F259F5F99E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleConditionEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleConditionEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLECONDITIONEVALUATOR_METHOD_2_F785F9F259F5F99E_OFFSET))(a1, a2);
		}
	};
}
