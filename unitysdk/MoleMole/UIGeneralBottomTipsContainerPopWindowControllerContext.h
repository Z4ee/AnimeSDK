#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x157A44C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBottomTipsContainerPopWindowControllerContext_TypeDefinitionIndex = 71044;

	class UIGeneralBottomTipsContainerPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Text; // 0x28
		::System::String* IconPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOTTOMTIPSCONTAINERPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
