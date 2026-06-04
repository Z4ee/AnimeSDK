#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_METHOD_2_11321B2887049EFE_OFFSET UNITYSDK_OFFSET(0x19635390)
#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_METHOD_2_96EBC6E939936445_OFFSET UNITYSDK_OFFSET(0x196350D0)
#define RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19635380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleBaseEvaluator_TypeDefinitionIndex = 15059;

	class ChimeraBattleBaseEvaluator : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_96EBC6E939936445(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleBaseEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleBaseEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_METHOD_2_96EBC6E939936445_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_11321B2887049EFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleBaseEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleBaseEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEBASEEVALUATOR_METHOD_2_11321B2887049EFE_OFFSET))(a1, a2);
		}
	};
}
