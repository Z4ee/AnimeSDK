#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLELEVELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160DF740)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleLevelDialogPopWindowController_Context_TypeDefinitionIndex = 50527;

	class UISocialCircleLevelDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E23E4CB2769CC93F* SocialCircleData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLELEVELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
