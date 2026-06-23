#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1824EF69C8E376A3;
class Class_2_61C99D337397632C_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0x1382BDD0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1382B070)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1382B100)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1382BE50)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1382ADB0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1382B000)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0x1382B190)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET UNITYSDK_OFFSET(0x1382B9D0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET UNITYSDK_OFFSET(0x1382BD50)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1382C090)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1382C0F0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1382C180)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1382C210)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1382C2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITeamEditIconWidgetController_TypeDefinitionIndex = 51276;

	class UITeamEditIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61C99D337397632C_1* _view; // 0x2C0
		::System::Action_1<::System::Int32>* IconClickAction; // 0x2C8
		::System::Int32 Index; // 0x2D0
		::System::Boolean IsBigScene; // 0x2D4
		::UnityEngine::Material* _hpMaterial; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnSkinBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONSKINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void RefreshAvatar(::Class_2_1824EF69C8E376A3* avatarItem, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET))(this, avatarItem, isLock);
		}

		::System::Void RefreshBuddy(::System::UInt32 buddyID, ::System::Boolean hasBuddy, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET))(this, buddyID, hasBuddy, isLock);
		}

		::System::Void SetAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET))(this);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
