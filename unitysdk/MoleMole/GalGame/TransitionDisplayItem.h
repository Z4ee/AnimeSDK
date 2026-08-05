#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/TransitionDisplayItem_ItemType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x179023E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionDisplayItem_TypeDefinitionIndex = 61817;

	class TransitionDisplayItem : public ::System::Object
	{
	public:
		::System::String* textKey; // 0x10
		::System::Int32 bindSubSectionIndex; // 0x18
		::MoleMole::GalGame::TransitionDisplayItem_ItemType itemType; // 0x1C
		::System::Int32 bindSectionIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONDISPLAYITEM__CTOR_OFFSET))(this);
		}
	};
}
