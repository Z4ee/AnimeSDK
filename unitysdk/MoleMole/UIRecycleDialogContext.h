#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

namespace System { class Action; }

#define MOLEMOLE_UIRECYCLEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF9B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogContext_TypeDefinitionIndex = 41945;

	class UIRecycleDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Int32 FromDevelopmentAvatarID; // 0x30
		::Share::EItemType ShowItemType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
