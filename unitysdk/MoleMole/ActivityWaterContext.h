#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;

#define MOLEMOLE_ACTIVITYWATERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB842E0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityWaterContext_TypeDefinitionIndex = 59818;

	class ActivityWaterContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* rootActivityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWATERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
