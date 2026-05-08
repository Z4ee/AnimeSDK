#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_06888FEBA001BCEB;
class Class_1_FC14C7248AA68DF4;
class Class_2_0E3D561C72111316;
class Class_2_1AEF5DFE7F1C8F89;
class Class_2_208CC9941471731A_362;
class Class_2_E50E8EF790262554;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_INITTASKINFOITEMS_OFFSET UNITYSDK_OFFSET(0x16407C70)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16408130)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164079A0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164081C0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164074F0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16407550)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET UNITYSDK_OFFSET(0x16407B10)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x16408730)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0x16408240)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16408A60)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16408B40)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16408BD0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16408C70)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16408D00)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16408D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCinemaDateWidgetController_TypeDefinitionIndex = 54169;

	class UIInLevelPauseCinemaDateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E50E8EF790262554* _view; // 0x2B8
		::System::Boolean isDateMode; // 0x2C0
		::Class_2_1AEF5DFE7F1C8F89* datePlayController; // 0x2C8
		::Class_2_208CC9941471731A_362* cinemaDateConfig; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>* rateInfoList; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_FC14C7248AA68DF4*>* challengeDataList; // 0x2E0
		::System::Boolean isSingleMode; // 0x2E8
		::Class_2_0E3D561C72111316* singlePlayController; // 0x2F0
		::MoleMole::UIInLevelPauseCinemaSingleWidgetController* singleWidget; // 0x2F8
		::System::Collections::Generic::List_1<::Class_1_06888FEBA001BCEB*>* singleChallengeList; // 0x300

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
