#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALCONTINUOUSSHAKENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161F1A20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalContinuousShakeNode_TypeDefinitionIndex = 85475;

	class GalContinuousShakeNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* shakeKey; // 0x20
		::System::Boolean continuousShakeOn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALCONTINUOUSSHAKENODE__CTOR_OFFSET))(this);
		}
	};
}
