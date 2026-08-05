#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UINEWBIEGUIDEGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x189D0940)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideGetPopWindowController_Context_TypeDefinitionIndex = 69170;

	class UINewbieGuideGetPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsAvatar; // 0x28
		::System::Int32 ItemId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
