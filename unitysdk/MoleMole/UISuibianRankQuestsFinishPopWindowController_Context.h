#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_282;

#define MOLEMOLE_UISUIBIANRANKQUESTSFINISHPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1378A800)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianRankQuestsFinishPopWindowController_Context_TypeDefinitionIndex = 61638;

	class UISuibianRankQuestsFinishPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_282* Config; // 0x28
		::System::Int32 PrvFinishCount; // 0x30
		::System::Int32 CurFinishCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANRANKQUESTSFINISHPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
