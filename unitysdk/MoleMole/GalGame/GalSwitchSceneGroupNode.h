#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/GalSwitchSceneGroupNode_AnimLength.h"

namespace MoleMole::GalGame { class SwitchSceneConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D48AA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchSceneGroupNode_TypeDefinitionIndex = 69684;

	class GalSwitchSceneGroupNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>* configs; // 0x20
		::MoleMole::GalGame::GalSwitchSceneGroupNode_AnimLength fadeAnimLength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE__CTOR_OFFSET))(this);
		}
	};
}
