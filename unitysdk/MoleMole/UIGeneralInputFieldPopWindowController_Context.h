#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralInputFieldPopWindowController_Result.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_1E2C28EB5494586C;
class Class_2_D5115202A5A8225D;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALINPUTFIELDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D99DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralInputFieldPopWindowController_Context_TypeDefinitionIndex = 52255;

	class UIGeneralInputFieldPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TipsText; // 0x28
		::System::String* CancelButtonTextKey; // 0x30
		::System::String* Text; // 0x38
		::System::Action_2<::MoleMole::UIGeneralInputFieldPopWindowController_Result, ::System::String*>* OnCloseAction; // 0x40
		::Class_2_D5115202A5A8225D* StringLimitChecker; // 0x48
		::System::String* TitleText; // 0x50
		::System::String* PlaceHolderText; // 0x58
		::Class_2_1E2C28EB5494586C* TextValidate; // 0x60
		::System::String* OKButtonTextKey; // 0x68
		::System::String* TitleEnText; // 0x70
		::System::String* BottomTipsText; // 0x78
		::System::Boolean EnableCancelButton; // 0x80
		::System::Nullable_1<::Enum_3_63BCB6C405BA8A1D_1> SensitiveTextType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINPUTFIELDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
