#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B643415D9462D8E2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETSHOWENTITY_OFFSET UNITYSDK_OFFSET(0x11BCE0B0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x11BCCA50)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x11BCC930)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11BCC640)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11BCC9A0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11BCC9F0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BCC6D0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BCC730)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x11BCCD00)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETBUDDYINFO_OFFSET UNITYSDK_OFFSET(0x11BCD680)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x11BCCAB0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x11BCE100)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x11BCDC90)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCE170)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11BCE1D0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11BCE260)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11BCE270)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BCE300)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BCE390)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRoleRowWidgetController_TypeDefinitionIndex = 85190;

	class UITabBtnRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B643415D9462D8E2* _view; // 0x2C0
		::System::UInt32 _showEntityID; // 0x2C8
		::System::Int32 avatarID; // 0x2CC
		::System::Int32 buddyID; // 0x2D0
		::System::Boolean isBuddy; // 0x2D4
		::System::Boolean showBackStage; // 0x2D5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void SetEmptyState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, state);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void SetNum(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETNUM_OFFSET))(this, value);
		}

		::System::Void SetAvatarInfo(::System::UInt32 showEntityID, ::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETAVATARINFO_OFFSET))(this, showEntityID, avatarId);
		}

		::System::Void SetBuddyInfo(::System::UInt32 showEntityID, ::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETBUDDYINFO_OFFSET))(this, showEntityID, buddyID);
		}

		::System::UInt32 GetShowEntity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETSHOWENTITY_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETICON_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
