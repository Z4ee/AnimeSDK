#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MobileInLevelQTECancelType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_MOBILEINLEVELQTECANCELTYPESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03E500)

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelTypeSettingContext_TypeDefinitionIndex = 76030;

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
