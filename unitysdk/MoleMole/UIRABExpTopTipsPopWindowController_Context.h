#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F9040)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpTopTipsPopWindowController_Context_TypeDefinitionIndex = 43147;

	class UIRABExpTopTipsPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Level; // 0x28
		::System::Int32 PreLevel; // 0x2C
		::System::Int32 Exp; // 0x30
		::System::Int32 PreExp; // 0x34
		::System::Int32 TipID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
