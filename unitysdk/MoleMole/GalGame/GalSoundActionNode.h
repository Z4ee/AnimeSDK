#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A3F20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSoundActionNode_TypeDefinitionIndex = 90779;

	class GalSoundActionNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* SoundAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE__CTOR_OFFSET))(this);
		}
	};
}
