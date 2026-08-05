#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIBANGKOVREPLENISHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1956F290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovReplenishDialogPopWindowController_Context_TypeDefinitionIndex = 88913;

	class UIBangkovReplenishDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnConfirm; // 0x28
		::System::Action* OnCancel; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ItemList2; // 0x38
		::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ItemList1; // 0x40
		::System::String* HintText2; // 0x48
		::System::String* HintText1; // 0x50
		::System::Boolean ShowGroup1; // 0x58
		::System::Boolean ShowGroup2; // 0x59
		::System::Boolean ShowCancelBtn; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVREPLENISHDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
