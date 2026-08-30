#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_42924AFF21376876;
namespace RPG::Client::FateRin { template <typename T> class ViewModelEventHandler_1; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardDetailItemBaseViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_ADD_ONSELECTTAB_OFFSET UNITYSDK_OFFSET(0x1CBF4DB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CBF4F30)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GETDETAILITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CBF51F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GETDETAILITEMS_OFFSET UNITYSDK_OFFSET(0x1CBF51B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1CBF4E70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_REMOVE_ONSELECTTAB_OFFSET UNITYSDK_OFFSET(0x1CBF4E10)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x1CBF5270)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_SET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1CBF4E80)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4E90)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL__INITDETAILITEMS_OFFSET UNITYSDK_OFFSET(0x1CBF50A0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailViewModel_TypeDefinitionIndex = 79469;

	class CaseBoardDetailViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_42924AFF21376876* _DetailItemFactory; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Int32>* OnSelectTab; // 0x28
		::RPG::Client::FateRin::CaseBoard::TeamViewModel* _TeamViewModel; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* _DetailItems; // 0x38
		::System::Int32 _SelectedTabIndex_k__BackingField; // 0x40

		::System::Void _ctor(::Class_1_42924AFF21376876* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_42924AFF21376876*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void add_OnSelectTab(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_ADD_ONSELECTTAB_OFFSET))(this, a1);
		}

		::System::Void remove_OnSelectTab(::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_REMOVE_ONSELECTTAB_OFFSET))(this, a1);
		}

		::System::Int32 get_SelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_SET_SELECTEDTABINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* GetDetailItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GETDETAILITEMS_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel* GetDetailItemByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_GETDETAILITEMBYINDEX_OFFSET))(this, a1);
		}

		::System::Void SelectTab(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL_SELECTTAB_OFFSET))(this, a1);
		}

		::System::Void _InitDetailItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILVIEWMODEL__INITDETAILITEMS_OFFSET))(this);
		}
	};
}
