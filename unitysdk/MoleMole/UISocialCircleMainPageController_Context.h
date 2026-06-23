#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16171120)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainPageController_Context_TypeDefinitionIndex = 62257;

	class UISocialCircleMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 FirstShowUid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
