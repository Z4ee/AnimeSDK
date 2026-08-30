#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardDetailItemBaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/DetailType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::FateRin::CaseBoard { class CaseBoardServantViewModel; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_SERVANTCLASS_OFFSET UNITYSDK_OFFSET(0x1CBF4B40)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1CBF4B30)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET UNITYSDK_OFFSET(0x1CBF49F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET UNITYSDK_OFFSET(0x1CBF4A50)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CBF49A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4B50)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailServantItemViewModel_TypeDefinitionIndex = 79473;

	class CaseBoardDetailServantItemViewModel : public ::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel
	{
	public:
		::System::String* _ServantClass_k__BackingField; // 0x10
		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* _Servant_k__BackingField; // 0x18
		::RPG::Client::TextID _TabMainTitle; // 0x20

		::System::Void _ctor(::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::FateRin::CaseBoard::DetailType get_Type()
		{
			return ((::RPG::Client::FateRin::CaseBoard::DetailType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabMainTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabSubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}

		::System::String* get_ServantClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILSERVANTITEMVIEWMODEL_GET_SERVANTCLASS_OFFSET))(this);
		}
	};
}
