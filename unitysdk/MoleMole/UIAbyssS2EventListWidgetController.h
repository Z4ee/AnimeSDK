#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_06C2877021BC3D18;
class Class_2_14E7CE92E8A3183F;
class Class_2_AB2EF02AB0EB9012;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1386C0E0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1386C580)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1386C650)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1386C170)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1386BD60)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1386C070)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHMISSIONVIEW_OFFSET UNITYSDK_OFFSET(0x1386C330)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1386C1F0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1386CAC0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1386CB20)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1386CBB0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1386CC40)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1386CCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventListWidgetController_TypeDefinitionIndex = 60836;

	class UIAbyssS2EventListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_06C2877021BC3D18* _view; // 0x2C0
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x2C8
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* _dungeonConfigs; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* configs, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, configs, init);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardMissionBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshMissionView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHMISSIONVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
