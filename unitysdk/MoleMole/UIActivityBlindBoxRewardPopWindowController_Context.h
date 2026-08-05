#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIACTIVITYBLINDBOXREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19751E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxRewardPopWindowController_Context_TypeDefinitionIndex = 72545;

	class UIActivityBlindBoxRewardPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* DropIdList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
