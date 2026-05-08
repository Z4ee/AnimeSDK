#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYTRACKINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148DD060)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTrackInfoDialogContext_TypeDefinitionIndex = 75415;

	class UIMainCityTrackInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTRACKINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
