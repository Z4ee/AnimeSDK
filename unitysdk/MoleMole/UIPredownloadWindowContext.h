#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIPREDOWNLOADWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15200260)

namespace MoleMole
{
	inline static constexpr unsigned int UIPredownloadWindowContext_TypeDefinitionIndex = 59149;

	class UIPredownloadWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* SuccessCallback; // 0x28
		::System::Action* CancelCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPREDOWNLOADWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
