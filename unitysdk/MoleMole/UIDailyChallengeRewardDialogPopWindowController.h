#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_8B0F2404306BC80A;
class Class_2_9D9172C07F82DDAE;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CREATITEMICON_OFFSET UNITYSDK_OFFSET(0x18551450)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x18550340)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1854FA60)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18550750)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET UNITYSDK_OFFSET(0x18551860)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1854FA70)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18550F70)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18550B20)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18550DF0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1854FB00)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1854FF30)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET UNITYSDK_OFFSET(0x18551DE0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0x185515E0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHTIP_OFFSET UNITYSDK_OFFSET(0x18550F00)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18551130)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET UNITYSDK_OFFSET(0x185521D0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_SETTIPS_OFFSET UNITYSDK_OFFSET(0x18550E60)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET UNITYSDK_OFFSET(0x185517E0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18552250)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18552270)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18552300)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18552330)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185523F0)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18552400)
#define MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18552410)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeRewardDialogPopWindowController_TypeDefinitionIndex = 66784;

	class UIDailyChallengeRewardDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single _dragThreshold; // 0x0
		::Class_2_8B0F2404306BC80A* _view; // 0x318
		::System::String* _tipsInfo; // 0x320
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x328
		::System::Boolean _skipAnim; // 0x330
		::System::Single _scrollPos; // 0x334
		::System::Int32 _xcount; // 0x338
		::System::Int32 _ycount; // 0x33C
		::System::Int32 _pageCount; // 0x340
		::System::Int32 _curPageIndex; // 0x344
		::UnityEngine::Vector4 _contentOffset; // 0x348
		::System::Int32 _maxPageIndex; // 0x358
		::System::Int32 _curShowCount; // 0x35C
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _curShowItems; // 0x360
		::MonoUITableScrollV2* _scrollRectEx; // 0x368
		::UnityEngine::Bounds _viewBounds; // 0x370
		::UnityEngine::RectTransform* _viewRect; // 0x388
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>* _itemStatus; // 0x390
		::UnityEngine::Animation* _anim; // 0x398
		::System::Boolean _isClosing; // 0x3A0
		::System::Boolean useCustomInfo; // 0x3A1
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* customItemList; // 0x3A8
		::System::String* customTitle; // 0x3B0
		::System::String* customTitleEn; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTips(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_SETTIPS_OFFSET))(this, text);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void GetUIElementInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_GETUIELEMENTINFO_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItemIcon(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_CREATITEMICON_OFFSET))(this, binderInfo);
		}

		::System::Void RefreshItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHITEMLIST_OFFSET))(this);
		}

		::System::Void RefreshTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHTIP_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Collections::IEnumerator* waitFrameEnd()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_WAITFRAMEEND_OFFSET))(this);
		}

		::System::Void OnClickItemBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_ONCLICKITEMBTN_OFFSET))(this, index);
		}

		::System::Void OpenEquipDetail(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_OPENEQUIPDETAIL_OFFSET))(this, itemData);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* ResetContent()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER_RESETCONTENT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEREWARDDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
