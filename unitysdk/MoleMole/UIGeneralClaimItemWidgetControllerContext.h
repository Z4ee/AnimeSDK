#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_92BB5F3881865EA5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17778C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClaimItemWidgetControllerContext_TypeDefinitionIndex = 74231;

	class UIGeneralClaimItemWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_92BB5F3881865EA5 ClaimType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMITEMWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
