#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWISHLISTTARGETAVATARPOPUPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A88EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistTargetAvatarPopupContext_TypeDefinitionIndex = 47900;

	class UIWishlistTargetAvatarPopupContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 AvatarID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTTARGETAVATARPOPUPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
