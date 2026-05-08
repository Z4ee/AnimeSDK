#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C6855DE1E2953473.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E23030)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManagePageContext_TypeDefinitionIndex = 75114;

	class UISettingResourceManagePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TypeId; // 0x28
		::Enum_3_C6855DE1E2953473 PageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
