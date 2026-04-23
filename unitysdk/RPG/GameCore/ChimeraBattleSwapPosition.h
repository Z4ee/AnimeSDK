#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_METHOD_3_138DB09CD1ABAE22_OFFSET UNITYSDK_OFFSET(0x187F2D00)
#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_METHOD_3_3819C976B393FA92_OFFSET UNITYSDK_OFFSET(0x187F3BF0)
#define RPG_GAMECORE_CHIMERABATTLESWAPPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x187F2CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleSwapPosition_TypeDefinitionIndex = 15041;

	class ChimeraBattleSwapPosition : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* From; // 0x18
		::RPG::GameCore::ChimeraBattleTargetEvaluator* To; // 0x20
		::System::Single Time; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3819C976B393FA92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleSwapPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleSwapPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_METHOD_3_3819C976B393FA92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_138DB09CD1ABAE22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleSwapPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleSwapPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESWAPPOSITION_METHOD_3_138DB09CD1ABAE22_OFFSET))(a1, a2);
		}
	};
}
