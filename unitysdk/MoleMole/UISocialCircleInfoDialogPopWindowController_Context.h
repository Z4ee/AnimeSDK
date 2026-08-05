#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E23E4CB2769CC93F;

#define MOLEMOLE_UISOCIALCIRCLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2CAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleInfoDialogPopWindowController_Context_TypeDefinitionIndex = 54690;

	class UISocialCircleInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E23E4CB2769CC93F* SocialCircleData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
