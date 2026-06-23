#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYRETURNGIFTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17020EA0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityReturnGiftContext_TypeDefinitionIndex = 54620;

	class ActivityReturnGiftContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isFromAutoOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRETURNGIFTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
