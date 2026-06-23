#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALSUMMERPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17780200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSummerPopWindowController_Context_TypeDefinitionIndex = 49696;

	class UIGeneralSummerPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* titleKey; // 0x28
		::System::String* itemIconPath; // 0x30
		::System::String* itemNameKey; // 0x38
		::System::String* itemDescKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSUMMERPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
