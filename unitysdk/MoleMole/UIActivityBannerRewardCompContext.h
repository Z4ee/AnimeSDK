#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_18;

#define MOLEMOLE_UIACTIVITYBANNERREWARDCOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196D68B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBannerRewardCompContext_TypeDefinitionIndex = 72695;

	class UIActivityBannerRewardCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AE02BC8285203464_18* rewardTask; // 0x28
		::Class_1_D375C91CCE5D3999* activityData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBANNERREWARDCOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
