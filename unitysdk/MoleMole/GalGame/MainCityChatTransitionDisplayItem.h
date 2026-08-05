#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x129A6150)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionDisplayItem_TypeDefinitionIndex = 85022;

	class MainCityChatTransitionDisplayItem : public ::System::Object
	{
	public:
		::System::String* textKey; // 0x10
		::System::Int32 bindSectionIndex; // 0x18
		::System::Int32 iconId; // 0x1C
		::System::Int32 bindSubSectionIndex; // 0x20
		::System::Int32 optionalAvatarId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONDISPLAYITEM__CTOR_OFFSET))(this);
		}
	};
}
