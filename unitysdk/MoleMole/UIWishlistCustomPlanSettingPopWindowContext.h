#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10418000)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistCustomPlanSettingPopWindowContext_TypeDefinitionIndex = 80576;

	class UIWishlistCustomPlanSettingPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 CustomType; // 0x28
		::System::Int32 AvatarId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTCUSTOMPLANSETTINGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
