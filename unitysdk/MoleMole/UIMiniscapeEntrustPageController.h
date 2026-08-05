#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_3437E8F8CEFA7AE1;
class Class_2_2F788DFAB5136192;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIMiniscapeEntrustBtnWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GETGENERALCHALLENGEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x18671580)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GETREWARDINFODATALIST_OFFSET UNITYSDK_OFFSET(0x18671F60)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1866FDF0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GOTOTASK_OFFSET UNITYSDK_OFFSET(0x18672700)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_INITGAMEPADCUSTOMLIST_OFFSET UNITYSDK_OFFSET(0x18670AC0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1866FEE0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1866FE00)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x18671CB0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18670E70)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1866FE90)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186701E0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_REFRESHGAINDESC_OFFSET UNITYSDK_OFFSET(0x18670FD0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18670270)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_TAKEREWARDS_OFFSET UNITYSDK_OFFSET(0x18672220)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186729C0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x18672A50)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x18672AA0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_2_OFFSET UNITYSDK_OFFSET(0x18672AB0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_3_OFFSET UNITYSDK_OFFSET(0x18672AC0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_4_OFFSET UNITYSDK_OFFSET(0x18672B30)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18672C50)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18672CE0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18672CF0)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18672D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeEntrustPageController_TypeDefinitionIndex = 85456;

	class UIMiniscapeEntrustPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_2F788DFAB5136192* _view; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIMiniscapeEntrustBtnWidgetController*>* _taskWidgets; // 0x320
		::MoleMole::UIGeneralBottomRewardInfoWidgetController* _rewardInfoWidget; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 toRefreshTaskID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, toRefreshTaskID);
		}

		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* GetGeneralChallengeRewardList(::System::Int32 taskID)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GETGENERALCHALLENGEREWARDLIST_OFFSET))(this, taskID);
		}

		::System::Void OnRewardInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>* GetRewardInfoDataList(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* tempList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3437E8F8CEFA7AE1*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GETREWARDINFODATALIST_OFFSET))(this, tempList);
		}

		::System::Void RefreshGainDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_REFRESHGAINDESC_OFFSET))(this);
		}

		::System::Void TakeRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_TAKEREWARDS_OFFSET))(this);
		}

		::System::Void InitGamepadCustomList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_INITGAMEPADCUSTOMLIST_OFFSET))(this);
		}

		::System::Void GoToTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER_GOTOTASK_OFFSET))(this);
		}

		::System::Void _InitView_b__7_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_0_OFFSET))(this, args);
		}

		::System::Void _InitView_b__7_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_1_OFFSET))(this, args);
		}

		::System::Void _InitView_b__7_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_2_OFFSET))(this, args);
		}

		::System::Void _InitView_b__7_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_3_OFFSET))(this, args);
		}

		::System::Void _InitView_b__7_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER__INITVIEW_B__7_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
