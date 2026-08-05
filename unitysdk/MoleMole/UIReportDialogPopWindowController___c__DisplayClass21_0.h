#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1CC8F53861C28C2;
namespace MoleMole { class UIReportChatPopWindowController; }
namespace MoleMole { class UIReportDialogPopWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A86460)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__0_OFFSET UNITYSDK_OFFSET(0x16A86470)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__1_OFFSET UNITYSDK_OFFSET(0x16A86710)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__2_OFFSET UNITYSDK_OFFSET(0x16A86770)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__3_OFFSET UNITYSDK_OFFSET(0x16A866B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 65194;

	class UIReportDialogPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* __9__3; // 0x10
		::MoleMole::UIReportChatPopWindowController* reportChatController; // 0x18
		::MoleMole::UIReportDialogPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSelectChatHistory_b__0(::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>* msgList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B1CC8F53861C28C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__0_OFFSET))(this, msgList);
		}

		::System::Void _OnClickSelectChatHistory_b__3(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__3_OFFSET))(this, selectedNum);
		}

		::System::Void _OnClickSelectChatHistory_b__1(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__1_OFFSET))(this, selectedNum);
		}

		::System::Void _OnClickSelectChatHistory_b__2(::System::Int32 selectedNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONCLICKSELECTCHATHISTORY_B__2_OFFSET))(this, selectedNum);
		}
	};
}
