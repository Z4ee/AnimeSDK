#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B643415D9462D8E2_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETSHOWENTITY_OFFSET UNITYSDK_OFFSET(0x15134C00)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x15133580)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15133460)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15133180)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x151334D0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15133520)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15133210)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15133270)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETAVATARINFO_OFFSET UNITYSDK_OFFSET(0x15133830)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETBUDDYINFO_OFFSET UNITYSDK_OFFSET(0x151341C0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x151335E0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x15134C50)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x151347E0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15134CC0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15134D20)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15134DB0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15134DC0)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15134E50)
#define MOLEMOLE_UITABBTNROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15134EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRoleRowWidgetController_TypeDefinitionIndex = 63816;

	class UITabBtnRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B643415D9462D8E2_2* _view; // 0x2C0
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
