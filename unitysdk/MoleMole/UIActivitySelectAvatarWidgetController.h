#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_A933CF9454745DA7_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E6F70)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x183E7140)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E7000)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E6DA0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E6F00)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183E7080)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183E71D0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E7230)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E72C0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E7350)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E73E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySelectAvatarWidgetController_TypeDefinitionIndex = 78014;

	class UIActivitySelectAvatarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A933CF9454745DA7_1* _view; // 0x2C0
		::System::Int32 _index; // 0x2C8
		::System::Action_1<::System::Int32>* OnSelect; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 rewardID, ::System::Int32 index, ::System::Int32 takenIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rewardID, index, takenIndex);
		}

		::System::Void OnSelectAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
