#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaDataItem; }

#define RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD2E70)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS15_0__GETCHESSROGUEACCESSIBLEAREADATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x9FD4890)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaInfo___c__DisplayClass15_0_TypeDefinitionIndex = 61616;

	class ChessRogueAreaInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChessRogueAccessibleAreaDataList_b__0(::RPG::Client::ChessRogueAreaDataItem* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__DISPLAYCLASS15_0__GETCHESSROGUEACCESSIBLEAREADATALIST_B__0_OFFSET))(this, a);
		}
	};
}
