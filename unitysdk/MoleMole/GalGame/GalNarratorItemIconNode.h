#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALNARRATORITEMICONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11752DC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalNarratorItemIconNode_TypeDefinitionIndex = 41569;

	class GalNarratorItemIconNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* iconPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALNARRATORITEMICONNODE__CTOR_OFFSET))(this);
		}
	};
}
