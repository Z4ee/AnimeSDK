#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_AB111DB9731D063B;
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckEntranceViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsManagementPlanInfoViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsManagementWorkEntranceViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_ADDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x1C54BBD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C54B180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_EMPLOYEECHECKENTRANCEVM_OFFSET UNITYSDK_OFFSET(0x1C54BCB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_PLANINFOVM_OFFSET UNITYSDK_OFFSET(0x1C54BCF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_POPWINDOWLIST_OFFSET UNITYSDK_OFFSET(0x1C54BD10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_WORKENTRANCEVM_OFFSET UNITYSDK_OFFSET(0x1C54BCD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_EMPLOYEECHECKENTRANCEVM_OFFSET UNITYSDK_OFFSET(0x1C54BCC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_PLANINFOVM_OFFSET UNITYSDK_OFFSET(0x1C54BD00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_POPWINDOWLIST_OFFSET UNITYSDK_OFFSET(0x1C54BD20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_WORKENTRANCEVM_OFFSET UNITYSDK_OFFSET(0x1C54BCE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_STARTEMPLOYEECHECKTALK_OFFSET UNITYSDK_OFFSET(0x1C54B7A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_STARTEMPLOYEEHIREEVENT_OFFSET UNITYSDK_OFFSET(0x1C54B850)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__NOTIFYSWITCHUI3DLIMAO_OFFSET UNITYSDK_OFFSET(0x1C54B950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__REGISTERHIREEVENTFINISH_OFFSET UNITYSDK_OFFSET(0x1C54BB20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL___REGISTERHIREEVENTFINISH_G__ONHIREEVENTFINISH_4_0_OFFSET UNITYSDK_OFFSET(0x1C54BD30)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementViewModel_TypeDefinitionIndex = 79105;

	class LimaoNewsManagementViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* _PlanInfoVM_k__BackingField; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel* _WorkEntranceVM_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckEntranceViewModel* _EmployeeCheckEntranceVM_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* _PopWindowList_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsManagementViewModel* Create()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_CREATE_OFFSET))();
		}

		::System::Void StartEmployeeCheckTalk(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_STARTEMPLOYEECHECKTALK_OFFSET))(this, a1);
		}

		::System::Void StartEmployeeHireEvent(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_STARTEMPLOYEEHIREEVENT_OFFSET))(this, a1);
		}

		static ::System::Void _NotifySwitchUI3DLimao(::Class_1_AB111DB9731D063B* a1)
		{
			return ((::System::Void(*)(::Class_1_AB111DB9731D063B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__NOTIFYSWITCHUI3DLIMAO_OFFSET))(a1);
		}

		static ::System::Void _RegisterHireEventFinish()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL__REGISTERHIREEVENTFINISH_OFFSET))();
		}

		::System::Void AddPopWindow(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_ADDPOPWINDOW_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckEntranceViewModel* get_EmployeeCheckEntranceVM()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_EMPLOYEECHECKENTRANCEVM_OFFSET))(this);
		}

		::System::Void set_EmployeeCheckEntranceVM(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_EMPLOYEECHECKENTRANCEVM_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel* get_WorkEntranceVM()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_WORKENTRANCEVM_OFFSET))(this);
		}

		::System::Void set_WorkEntranceVM(::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_WORKENTRANCEVM_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* get_PlanInfoVM()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_PLANINFOVM_OFFSET))(this);
		}

		::System::Void set_PlanInfoVM(::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsManagementPlanInfoViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_PLANINFOVM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* get_PopWindowList()
		{
			return ((::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_GET_POPWINDOWLIST_OFFSET))(this);
		}

		::System::Void set_PopWindowList(::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL_SET_POPWINDOWLIST_OFFSET))(this, a1);
		}

		static ::System::Void __RegisterHireEventFinish_g__OnHireEventFinish_4_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTVIEWMODEL___REGISTERHIREEVENTFINISH_G__ONHIREEVENTFINISH_4_0_OFFSET))(a1);
		}
	};
}
