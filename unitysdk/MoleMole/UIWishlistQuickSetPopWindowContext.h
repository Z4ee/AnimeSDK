#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWISHLISTQUICKSETPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15147280)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistQuickSetPopWindowContext_TypeDefinitionIndex = 42203;

	class UIWishlistQuickSetPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AvatarId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTQUICKSETPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
