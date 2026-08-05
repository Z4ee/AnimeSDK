#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UISUIBIANTEMPLEINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179C9480)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleInfoDialogContext_TypeDefinitionIndex = 51193;

	class UISuibianTempleInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::String* Message; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
