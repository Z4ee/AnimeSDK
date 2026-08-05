#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFA5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMapPageController_Context_TypeDefinitionIndex = 65090;

	class UIMiniscapeMapPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TargetQuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
