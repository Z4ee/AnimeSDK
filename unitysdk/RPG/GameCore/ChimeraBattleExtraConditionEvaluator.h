#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleExtraPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleExtraTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_METHOD_2_EB41C6758B65C8FF_OFFSET UNITYSDK_OFFSET(0x19632010)
#define RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19635720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleExtraConditionEvaluator_TypeDefinitionIndex = 15063;

	class ChimeraBattleExtraConditionEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraBattleExtraPrefixType Prefix; // 0x10
		::RPG::GameCore::ChimeraBattleExtraTargetType Target; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EB41C6758B65C8FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEXTRACONDITIONEVALUATOR_METHOD_2_EB41C6758B65C8FF_OFFSET))(a1, a2);
		}
	};
}
