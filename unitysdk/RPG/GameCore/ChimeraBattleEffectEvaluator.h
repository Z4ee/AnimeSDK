#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleBaseEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_METHOD_3_0697352EEBA27404_OFFSET UNITYSDK_OFFSET(0x17094490)
#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_METHOD_3_55BEE487A7C0A7D0_OFFSET UNITYSDK_OFFSET(0x17094240)
#define RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17094230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleEffectEvaluator_TypeDefinitionIndex = 14527;

	class ChimeraBattleEffectEvaluator : public ::RPG::GameCore::ChimeraBattleBaseEvaluator
	{
	public:
		::System::String* UniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0697352EEBA27404(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleEffectEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleEffectEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_METHOD_3_0697352EEBA27404_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55BEE487A7C0A7D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleEffectEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleEffectEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEEFFECTEVALUATOR_METHOD_3_55BEE487A7C0A7D0_OFFSET))(a1, a2);
		}
	};
}
