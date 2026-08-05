#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_31559F1D415065A0;
class Class_1_80F99C640003DF47;
class Class_2_0D57ABF1DFEBE4AF;
class Class_2_0E3D561C72111316;
class Class_2_1AEF5DFE7F1C8F89;
class Class_2_208CC9941471731A_1098;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_INITTASKINFOITEMS_OFFSET UNITYSDK_OFFSET(0x189E2C90)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189E3930)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x189E29C0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189E39C0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189E2510)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189E2570)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET UNITYSDK_OFFSET(0x189E2B30)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x189E3FA0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0x189E3A40)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E42A0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189E4380)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x189E4410)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189E44B0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189E4540)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189E45D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCinemaDateWidgetController_TypeDefinitionIndex = 41552;

	class UIInLevelPauseCinemaDateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0D57ABF1DFEBE4AF* _view; // 0x2C0
		::System::Boolean isDateMode; // 0x2C8
		::Class_2_1AEF5DFE7F1C8F89* datePlayController; // 0x2D0
		::Class_2_208CC9941471731A_1098* cinemaDateConfig; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>* rateInfoList; // 0x2E0
		::System::Collections::Generic::List_1<::Class_1_31559F1D415065A0*>* challengeDataList; // 0x2E8
		::System::Boolean isSingleMode; // 0x2F0
		::Class_2_0E3D561C72111316* singlePlayController; // 0x2F8
		::MoleMole::UIInLevelPauseCinemaSingleWidgetController* singleWidget; // 0x300
		::System::Collections::Generic::List_1<::Class_1_80F99C640003DF47*>* singleChallengeList; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshDateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET))(this);
		}

		::System::Void RefreshMissionTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET))(this);
		}

		::System::Void RefreshMissionSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET))(this);
		}

		::System::Void InitTaskInfoItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_INITTASKINFOITEMS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
