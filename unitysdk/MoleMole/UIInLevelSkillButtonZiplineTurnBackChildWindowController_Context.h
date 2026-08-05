#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINETURNBACKCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC44D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonZiplineTurnBackChildWindowController_Context_TypeDefinitionIndex = 67236;

	class UIInLevelSkillButtonZiplineTurnBackChildWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::EntityHandle EntityHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINETURNBACKCHILDWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
