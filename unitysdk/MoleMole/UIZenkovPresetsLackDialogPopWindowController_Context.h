#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E531A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsLackDialogPopWindowController_Context_TypeDefinitionIndex = 44014;

	class UIZenkovPresetsLackDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* JumpAction; // 0x28
		::System::Action* CraftJumpAction; // 0x30
		::System::Action* ShopJumpAction; // 0x38
		::System::String* TitleOverride; // 0x40
		::System::Action* CancelAction; // 0x48
		::System::Action* OkAction; // 0x50
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ItemIdAndNum; // 0x58
		::System::Boolean ForceHideShopJump; // 0x60
		::System::Boolean ForceHideCraftJump; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSLACKDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
