#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_11;
class Class_2_1824EF69C8E376A3;
class Class_2_208CC9941471731A_665;
class Class_2_C66B315ABE7BC9BF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14B95C40)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14B95C30)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0x14B96B00)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCANCELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14B95DD0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x14B960D0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B96240)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONOKBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14B95E70)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET UNITYSDK_OFFSET(0x14B96030)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B97270)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B95C50)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B961D0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUNLOCKCLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x14B96150)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_REFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x14B96C20)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14B96470)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_SETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x14B96A30)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x14B962D0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14B972E0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14B97370)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14B97400)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14B97410)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14B97420)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeDialogPopWindowController_TypeDefinitionIndex = 82792;

	class UIMindscapeDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* TalentFullTip; // 0x0
		// static const ::System::String* PreviewModeHint; // 0x0
		// static const ::System::String* FriendPreviewModeHint; // 0x0
		::Class_2_C66B315ABE7BC9BF* _view; // 0x310
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _itemTalentCtrlList; // 0x318
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x320
		::System::Boolean _previewMode; // 0x328
		::System::Boolean _friendPreviewMode; // 0x329
		::Class_2_208CC9941471731A_665* _talentCfg; // 0x330
		::System::Int32 _talentSlot; // 0x338
		::System::Action_1<::System::Boolean>* _onTalentUnlockAction; // 0x340
		::System::Boolean canTalentUnlock; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCancelClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCANCELCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnOkBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONOKBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTalentUnLockHandle(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONTALENTUNLOCKHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnCloseHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCLOSEHANDLE_OFFSET))(this);
		}

		::System::Void OnUnlockCloseHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUNLOCKCLOSEHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetData(::Class_2_1824EF69C8E376A3* avatarItem, ::System::Int32 talentSlot, ::System::Boolean previewMode, ::System::Boolean friendPreviewMode, ::System::Action_1<::System::Boolean>* unlockAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_SETDATA_OFFSET))(this, avatarItem, talentSlot, previewMode, friendPreviewMode, unlockAction);
		}

		::System::Void SetAvatarColor(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_SETAVATARCOLOR_OFFSET))(this, c);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_REFRESHMATERIAL_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
