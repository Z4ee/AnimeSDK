#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_A933CF9454745DA7_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1954AF30)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x1954B130)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1954AFC0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1954AD60)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1954AEC0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1954B040)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1954B1C0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1954B220)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1954B2B0)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1954B340)
#define MOLEMOLE_UIACTIVITYSELECTAVATARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1954B3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySelectAvatarWidgetController_TypeDefinitionIndex = 70485;

	class UIActivitySelectAvatarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_A933CF9454745DA7_4* _view; // 0x2C0
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
