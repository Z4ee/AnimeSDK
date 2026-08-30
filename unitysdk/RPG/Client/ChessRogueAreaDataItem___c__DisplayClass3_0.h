#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaLayerDataItem; }

#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB94180)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS3_0__SYNC_B__0_OFFSET UNITYSDK_OFFSET(0xCB956C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaDataItem___c__DisplayClass3_0_TypeDefinitionIndex = 66902;

	class ChessRogueAreaDataItem___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 areaLayerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Sync_b__0(::RPG::Client::ChessRogueAreaLayerDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaLayerDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS3_0__SYNC_B__0_OFFSET))(this, a1);
		}
	};
}
