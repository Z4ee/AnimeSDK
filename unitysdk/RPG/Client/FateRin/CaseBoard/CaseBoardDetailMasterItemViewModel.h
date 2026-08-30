#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardDetailItemBaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/DetailType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::FateRin::CaseBoard { class CaseBoardAvatarViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_CREATEWITHSERVANTTAB_OFFSET UNITYSDK_OFFSET(0xCFF54D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_MASTERCLASS_OFFSET UNITYSDK_OFFSET(0xCFF5290)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_MASTER_OFFSET UNITYSDK_OFFSET(0xCFF5280)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET UNITYSDK_OFFSET(0xCFF5130)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET UNITYSDK_OFFSET(0xCFF5190)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCFF50E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCFF54B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF52A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__GETDEFAULTMASTERCLASS_OFFSET UNITYSDK_OFFSET(0xCFF5430)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__GETDEFAULTMASTERTABMAINTITLE_OFFSET UNITYSDK_OFFSET(0xCFF5340)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailMasterItemViewModel_TypeDefinitionIndex = 79473;

	class CaseBoardDetailMasterItemViewModel : public ::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel
	{
	public:
		::System::String* _MasterClass_k__BackingField; // 0x10
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* _Master_k__BackingField; // 0x18
		::RPG::Client::TextID _TabMainTitle; // 0x20

		::System::Void _ctor(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1, ::RPG::Client::TextID a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::CaseBoard::DetailType get_Type()
		{
			return ((::RPG::Client::FateRin::CaseBoard::DetailType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabMainTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabSubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* get_Master()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_MASTER_OFFSET))(this);
		}

		::System::String* get_MasterClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_GET_MASTERCLASS_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::CaseBoardDetailMasterItemViewModel* CreateWithServantTab(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::String* a4)
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardDetailMasterItemViewModel*(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL_CREATEWITHSERVANTTAB_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TextID _GetDefaultMasterTabMainTitle(::System::String* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__GETDEFAULTMASTERTABMAINTITLE_OFFSET))(a1);
		}

		static ::System::String* _GetDefaultMasterClass(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILMASTERITEMVIEWMODEL__GETDEFAULTMASTERCLASS_OFFSET))(a1);
		}
	};
}
