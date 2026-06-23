#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALPLAYBGMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161F1D20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayBGMNode_TypeDefinitionIndex = 84761;

	class GalPlayBGMNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* bgmState; // 0x20
		::System::Int32 mainCityBgmID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE__CTOR_OFFSET))(this);
		}
	};
}
