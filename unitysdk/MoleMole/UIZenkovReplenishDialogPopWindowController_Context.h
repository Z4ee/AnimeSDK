#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIZENKOVREPLENISHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1165E9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovReplenishDialogPopWindowController_Context_TypeDefinitionIndex = 59010;

	class UIZenkovReplenishDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* OKBtnTextKey; // 0x28
		::System::String* DescText; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ItemList; // 0x38
		::System::String* HintText; // 0x40
		::System::Action* OnConfirm; // 0x48
		::System::Action* OnCancel; // 0x50
		::System::Int64 Price; // 0x58
		::System::Boolean ShowPrice; // 0x60
		::System::Boolean ShowCancelBtn; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVREPLENISHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
