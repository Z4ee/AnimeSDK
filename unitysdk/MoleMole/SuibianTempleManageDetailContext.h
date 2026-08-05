#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_SUIBIANTEMPLEMANAGEDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173A8D00)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleManageDetailContext_TypeDefinitionIndex = 90403;

	class SuibianTempleManageDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_D3384FC764485EA3 OpenType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEMANAGEDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
