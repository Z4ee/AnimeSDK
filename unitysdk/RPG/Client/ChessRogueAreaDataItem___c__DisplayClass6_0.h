#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChessRogueAreaLayerDataItem; }

#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9362440)
#define RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__GETLAYERDATAITEM_B__0_OFFSET UNITYSDK_OFFSET(0x9363700)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueAreaDataItem___c__DisplayClass6_0_TypeDefinitionIndex = 54424;

	class ChessRogueAreaDataItem___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 areaLayerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLayerDataItem_b__0(::RPG::Client::ChessRogueAreaLayerDataItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaLayerDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREADATAITEM___C__DISPLAYCLASS6_0__GETLAYERDATAITEM_B__0_OFFSET))(this, x);
		}
	};
}
