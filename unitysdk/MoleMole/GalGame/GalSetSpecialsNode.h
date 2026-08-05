#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole { class SpecialKeyValue; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118C6800)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSetSpecialsNode_TypeDefinitionIndex = 86924;

	class GalSetSpecialsNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>* Specials; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE__CTOR_OFFSET))(this);
		}
	};
}
