#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaLayerDataItem; }

#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB943F0)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__GETLAYERDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0xCB956E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaDataItem___c__DisplayClass6_0_TypeDefinitionIndex = 66903;

	class ChessRogueAreaDataItem___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 areaLayerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLayerDataItem_b__0(::RPG::Client::ChessRogueAreaLayerDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaLayerDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__GETLAYERDATAITEM_B__0_OFFSET))(this, a1);
		}
	};
}
