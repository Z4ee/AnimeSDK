#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class GalGameActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14287340)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalActionPlayNode_TypeDefinitionIndex = 68618;

	class GalActionPlayNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameActionBase*>* actionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE__CTOR_OFFSET))(this);
		}
	};
}
