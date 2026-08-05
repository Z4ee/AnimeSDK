#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALTRANSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x107DEED0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalTransitionNode_TypeDefinitionIndex = 55859;

	class GalTransitionNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>* transitionList; // 0x20
		::System::String* transitionName; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>* conditionTransitionList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALTRANSITIONNODE__CTOR_OFFSET))(this);
		}
	};
}
