#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T1, typename T2> class Class_1_516A565475879095;

#define MOLEMOLE_UIRABSTAGEITEMREWARDPOPWINDOWCONTROLLER_RABSTAGEITEMREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECCAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageItemRewardPopWindowController_RABStageItemRewardContext_TypeDefinitionIndex = 43276;

	class UIRABStageItemRewardPopWindowController_RABStageItemRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* ItemRewardMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEITEMREWARDPOPWINDOWCONTROLLER_RABSTAGEITEMREWARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
