#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MobileInLevelQTECancelType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MOBILEINLEVELQTECANCELTYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31BB0)

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelTypeSettingContext_TypeDefinitionIndex = 59958;

	class MobileInLevelQTECancelTypeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::MobileInLevelQTECancelType CancelType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOBILEINLEVELQTECANCELTYPESETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
