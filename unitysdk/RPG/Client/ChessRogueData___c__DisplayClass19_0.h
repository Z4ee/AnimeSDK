#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueModifierDataItem; }

#define RPG_CLIENT_CHESSROGUEDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB39230)
#define RPG_CLIENT_CHESSROGUEDATA___C__DISPLAYCLASS19_0___TRYREMOVEROGUEMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x1CB39260)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueData___c__DisplayClass19_0_TypeDefinitionIndex = 66928;

	class ChessRogueData___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::UInt64 modifierID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __TryRemoveRogueModifier_b__0(::RPG::Client::ChessRogueModifierDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueModifierDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEDATA___C__DISPLAYCLASS19_0___TRYREMOVEROGUEMODIFIER_B__0_OFFSET))(this, a1);
		}
	};
}
