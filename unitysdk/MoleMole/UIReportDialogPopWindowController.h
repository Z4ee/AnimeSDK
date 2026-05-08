#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_3056A65E74601914;
class Class_1_57F7F2BF8C55D6B6;
class Class_1_7AD143A329DB3CBB;
class Class_1_89120A467F7A010D;
class Class_1_BE6BF7909AD9D940;
class Class_1_D7C05CE3854E5916;
class Class_2_2F3C7D4EFC74D485;
class Class_2_75B55FBF5B9BC90B;
class Class_2_79AE422BA06F6D26_14;
namespace MoleMole { class ReportContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralReportItemWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1456EB40)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITPHOTOWALLUIVIEW_OFFSET UNITYSDK_OFFSET(0x145719F0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTCONTENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x145711A0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTVIEW_OFFSET UNITYSDK_OFFSET(0x1456FDC0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITSUBTYPES_OFFSET UNITYSDK_OFFSET(0x14570CE0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKLEFTTAB_OFFSET UNITYSDK_OFFSET(0x14571140)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKSELECTCHATHISTORY_OFFSET UNITYSDK_OFFSET(0x14571C40)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14570760)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x145706B0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDDESELECT_OFFSET UNITYSDK_OFFSET(0x145728E0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x14572880)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x145727A0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x145707F0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1456EB50)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1456F6C0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETCHEATREPORTSUBTYPES_OFFSET UNITYSDK_OFFSET(0x14570F70)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETINFOREPORTSUBTYPES_OFFSET UNITYSDK_OFFSET(0x14570900)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTITEM_OFFSET UNITYSDK_OFFSET(0x14570AD0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTTAGDATA_OFFSET UNITYSDK_OFFSET(0x1456FC30)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_SUBMITREPORT_OFFSET UNITYSDK_OFFSET(0x14571FA0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x145729B0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITREPORTVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x14572B80)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITSUBTYPES_B__16_0_OFFSET UNITYSDK_OFFSET(0x14572C80)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14572E80)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14572F10)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14572F40)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14572F50)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14572F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController_TypeDefinitionIndex = 38580;

	class UIReportDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::System::String*>* mainTextDic; // 0x310
		::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>* subTextDic; // 0x318
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_1, ::System::String*>* reportInputTextDic; // 0x320
		::Class_2_79AE422BA06F6D26_14* _view; // 0x328
		::Class_2_2F3C7D4EFC74D485* _model; // 0x330
		::System::UInt32 _reportUID; // 0x338
		::Class_1_BE6BF7909AD9D940* _reportUserInfo; // 0x340
		::System::Boolean _isRealPlayer; // 0x348
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* _leftTabReportType; // 0x350
		::System::Collections::Generic::List_1<::System::String*>* _leftTabNames; // 0x358
		::System::Collections::Generic::List_1<::System::String*>* _rightTabNames; // 0x360
		::Enum_3_DFCB42601400F441_1 currSelectedType; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralReportItemWidgetController*>* reportItemControllers; // 0x370
		::System::Int32 _reportTagStartIdx; // 0x378
		::System::Int32 _reportTagIdx; // 0x37C
		::System::String* _lastReportContent; // 0x380
		::System::String* _postDesc; // 0x388
		::Class_2_75B55FBF5B9BC90B* _playerForumPostData; // 0x390
		::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D*>* _reportMsgDataList; // 0x398
		::System::Boolean _isRequestingData; // 0x3A0
		::System::Int32 _currSelectedChatNum; // 0x3A4
		::System::Int32 maxReportChatNum; // 0x3A8
		::Class_1_7AD143A329DB3CBB* _imageViewModel; // 0x3B0
		::System::Boolean _hasPhotoWallContent; // 0x3B8
		::Class_1_3056A65E74601914* _reportPhotoWallNetworkData; // 0x3C0
		::System::Boolean _openFromFriendPhotoWall; // 0x3C8
		::System::Int32 reportInputMaxCount; // 0x3CC
		::Class_1_D7C05CE3854E5916* handler; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitReportView(::MoleMole::ReportContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ReportContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTVIEW_OFFSET))(this, context);
		}

		::System::Void ResetInfoReportSubTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETINFOREPORTSUBTYPES_OFFSET))(this);
		}

		::System::Void ResetCheatReportSubTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETCHEATREPORTSUBTYPES_OFFSET))(this);
		}

		::System::Void ResetReportItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTITEM_OFFSET))(this);
		}

		::System::Void InitSubTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITSUBTYPES_OFFSET))(this);
		}

		::System::Void OnClickLeftTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKLEFTTAB_OFFSET))(this, index);
		}

		::System::Void InitReportContentByIndex(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTCONTENTBYINDEX_OFFSET))(this, idx);
		}

		::System::Void InitPhotoWallUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITPHOTOWALLUIVIEW_OFFSET))(this);
		}

		::System::Void ResetReportTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTTAGDATA_OFFSET))(this);
		}

		::System::Void OnClickSelectChatHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKSELECTCHATHISTORY_OFFSET))(this);
		}

		::System::Void SubmitReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_SUBMITREPORT_OFFSET))(this);
		}

		::System::Char OnTextValidateInput(::System::String* text, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET))(this, text, charIndex, addedChar);
		}

		::System::Void OnInputFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDSELECT_OFFSET))(this);
		}

		::System::Void OnInputFieldDeselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDDESELECT_OFFSET))(this);
		}

		::System::Void _InitReportView_b__12_0(::Class_1_57F7F2BF8C55D6B6* sysInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITREPORTVIEW_B__12_0_OFFSET))(this, sysInfo);
		}

		::System::Void _InitSubTypes_b__16_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITSUBTYPES_B__16_0_OFFSET))(this, idx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
