#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleBaseEvaluator.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetPrefixType.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleTargetType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_METHOD_3_7DFCD86CD8062A6A_OFFSET UNITYSDK_OFFSET(0x196354B0)
#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_METHOD_3_946E9498D43F6814_OFFSET UNITYSDK_OFFSET(0x19633820)
#define RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x196354A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleTargetEvaluator_TypeDefinitionIndex = 15061;

	class ChimeraBattleTargetEvaluator : public ::RPG::GameCore::ChimeraBattleBaseEvaluator
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetPrefixType Prefix; // 0x10
		::RPG::GameCore::ChimeraBattleTargetType Target; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_946E9498D43F6814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleTargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleTargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_METHOD_3_946E9498D43F6814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7DFCD86CD8062A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleTargetEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleTargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLETARGETEVALUATOR_METHOD_3_7DFCD86CD8062A6A_OFFSET))(a1, a2);
		}
	};
}
