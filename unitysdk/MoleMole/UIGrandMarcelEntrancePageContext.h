#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1840C110)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelEntrancePageContext_TypeDefinitionIndex = 72565;

	class UIGrandMarcelEntrancePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CancelAction; // 0x28
		::System::Action* ConfirmAction; // 0x30
		::System::Int32 BangbooPlatformerID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
