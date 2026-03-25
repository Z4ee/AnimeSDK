#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG_METHOD_4_167248E63CAA397C_OFFSET UNITYSDK_OFFSET(0x1708B140)
#define RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG_METHOD_4_F322B0F6ED576A84_OFFSET UNITYSDK_OFFSET(0x1708B070)
#define RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708B0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessByContainBehaviorFlag_TypeDefinitionIndex = 21998;

	class ChessByContainBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::ChessModifierBehaviorFlag Flag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F322B0F6ED576A84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessByContainBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessByContainBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG_METHOD_4_F322B0F6ED576A84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_167248E63CAA397C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSBYCONTAINBEHAVIORFLAG_METHOD_4_167248E63CAA397C_OFFSET))(a1, a2);
		}
	};
}
