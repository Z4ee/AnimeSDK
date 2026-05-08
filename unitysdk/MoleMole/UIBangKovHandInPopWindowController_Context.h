#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x142C4930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangKovHandInPopWindowController_Context_TypeDefinitionIndex = 64954;

	class UIBangKovHandInPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVHANDINPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
