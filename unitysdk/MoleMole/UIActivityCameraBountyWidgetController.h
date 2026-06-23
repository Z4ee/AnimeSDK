#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_8A0E3BF5C3F027CD;
class Class_1_FF92AD074325C377;
class Class_2_1B5E8ECBDE012320;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPhotoTaskRowWidgetController; }

#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C42DA0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C42E30)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C42C50)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C42D30)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_SETBOUNTYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0x18C42EB0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C433D0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C43430)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C434C0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C43550)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C435E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraBountyWidgetController_TypeDefinitionIndex = 65187;

	class UIActivityCameraBountyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1B5E8ECBDE012320* _view; // 0x2C0
		::MoleMole::UIPhotoTaskRowWidgetController* _singlePhotoTaskRow; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetBountySnapshotData(::Class_1_8A0E3BF5C3F027CD* snapshot, ::Class_1_FF92AD074325C377* photoActivityQuest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A0E3BF5C3F027CD*, ::Class_1_FF92AD074325C377*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_SETBOUNTYSNAPSHOTDATA_OFFSET))(this, snapshot, photoActivityQuest);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
