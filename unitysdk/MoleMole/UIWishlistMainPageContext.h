#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWISHLISTMAINPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE489FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageContext_TypeDefinitionIndex = 58746;

	class UIWishlistMainPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 AvatarID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
