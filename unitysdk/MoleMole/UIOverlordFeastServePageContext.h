#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1529E8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageContext_TypeDefinitionIndex = 65794;

	class UIOverlordFeastServePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsSpecialGuest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
