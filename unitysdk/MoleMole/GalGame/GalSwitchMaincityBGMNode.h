#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

#define MOLEMOLE_GALGAME_GALSWITCHMAINCITYBGMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDE120)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchMaincityBGMNode_TypeDefinitionIndex = 61054;

	class GalSwitchMaincityBGMNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Int32 mainCityTaskID; // 0x20
		::System::Int32 mainCityBgmID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHMAINCITYBGMNODE__CTOR_OFFSET))(this);
		}
	};
}
