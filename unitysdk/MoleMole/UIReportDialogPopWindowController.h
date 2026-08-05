#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441_2.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_1_5FBB235457C1293C;
class Class_1_7AD143A329DB3CBB;
class Class_1_89120A467F7A010D;
class Class_1_BE6BF7909AD9D940;
class Class_1_D7C05CE3854E5916;
class Class_2_2F3C7D4EFC74D485;
class Class_2_6DA289675FB59393;
class Class_2_79AE422BA06F6D26_214;
namespace MoleMole { class ReportContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralReportItemWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x179ACDF0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITPHOTOWALLUIVIEW_OFFSET UNITYSDK_OFFSET(0x179AFC20)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTCONTENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x179AF4B0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITREPORTVIEW_OFFSET UNITYSDK_OFFSET(0x179AE060)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_INITSUBTYPES_OFFSET UNITYSDK_OFFSET(0x179AEF90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKLEFTTAB_OFFSET UNITYSDK_OFFSET(0x179AF450)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCLICKSELECTCHATHISTORY_OFFSET UNITYSDK_OFFSET(0x179AFE70)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179AEA10)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x179AE960)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDDESELECT_OFFSET UNITYSDK_OFFSET(0x179B0AF0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONINPUTFIELDSELECT_OFFSET UNITYSDK_OFFSET(0x179B0A90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONTEXTVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x179B09C0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179AEAA0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179ACE00)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179AD960)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETCHEATREPORTSUBTYPES_OFFSET UNITYSDK_OFFSET(0x179AF280)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETINFOREPORTSUBTYPES_OFFSET UNITYSDK_OFFSET(0x179AEBB0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTITEM_OFFSET UNITYSDK_OFFSET(0x179AED80)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_RESETREPORTTAGDATA_OFFSET UNITYSDK_OFFSET(0x179ADED0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER_SUBMITREPORT_OFFSET UNITYSDK_OFFSET(0x179B01E0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179B0BC0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITREPORTVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x179B0D90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER__INITSUBTYPES_B__16_0_OFFSET UNITYSDK_OFFSET(0x179B0E90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179B1090)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x179B1120)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179B1150)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179B1160)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179B1170)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController_TypeDefinitionIndex = 65192;

	class UIReportDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::System::String*>* mainTextDic; // 0x318
		::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>* subTextDic; // 0x320
		::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441_2, ::System::String*>* reportInputTextDic; // 0x328
		::Class_2_79AE422BA06F6D26_214* _view; // 0x330
		::Class_2_2F3C7D4EFC74D485* _model; // 0x338
		::System::UInt32 _reportUID; // 0x340
		::Class_1_BE6BF7909AD9D940* _reportUserInfo; // 0x348
		::System::Boolean _isRealPlayer; // 0x350
		::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_2>* _leftTabReportType; // 0x358
		::System::Collections::Generic::List_1<::System::String*>* _leftTabNames; // 0x360
		::System::Collections::Generic::List_1<::System::String*>* _rightTabNames; // 0x368
		::Enum_3_DFCB42601400F441_2 currSelectedType; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralReportItemWidgetController*>* reportItemControllers; // 0x378
		::System::Int32 _reportTagStartIdx; // 0x380
		::System::Int32 _reportTagIdx; // 0x384
		::System::String* _lastReportContent; // 0x388
		::System::String* _postDesc; // 0x390
		::Class_2_6DA289675FB59393* _playerForumPostData; // 0x398
		::System::Collections::Generic::List_1<::Class_1_89120A467F7A010D*>* _reportMsgDataList; // 0x3A0
		::System::Boolean _isRequestingData; // 0x3A8
		::System::Int32 _currSelectedChatNum; // 0x3AC
		::System::Int32 maxReportChatNum; // 0x3B0
		::Class_1_7AD143A329DB3CBB* _imageViewModel; // 0x3B8
		::System::Boolean _hasPhotoWallContent; // 0x3C0
		::Class_1_5FBB235457C1293C* _reportPhotoWallNetworkData; // 0x3C8
		::System::Boolean _openFromFriendPhotoWall; // 0x3D0
		::System::Int32 reportInputMaxCount; // 0x3D4
		::Class_1_D7C05CE3854E5916* handler; // 0x3D8

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
