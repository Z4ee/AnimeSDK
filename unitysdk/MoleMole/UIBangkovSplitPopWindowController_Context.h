#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSplitPopWindowController_Context_TypeDefinitionIndex = 73494;

	class UIBangkovSplitPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnConfirmSplit; // 0x28
		::System::Int32 ItemId; // 0x30
		::System::Int32 CurrentNum; // 0x34
		::System::Int32 MaxSplitNum; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSPLITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
