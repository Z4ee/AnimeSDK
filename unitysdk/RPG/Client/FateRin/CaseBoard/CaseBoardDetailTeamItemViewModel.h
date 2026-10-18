#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardDetailItemBaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/DetailType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET UNITYSDK_OFFSET(0xCEFBB30)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET UNITYSDK_OFFSET(0xCEFBBE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xCEFBC50)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCEFBAF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFBC60)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailTeamItemViewModel_TypeDefinitionIndex = 80799;

	class CaseBoardDetailTeamItemViewModel : public ::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel
	{
	public:
		::RPG::Client::FateRin::CaseBoard::TeamViewModel* _Team_k__BackingField; // 0x10

		::System::Void _ctor(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::DetailType get_Type()
		{
			return ((::RPG::Client::FateRin::CaseBoard::DetailType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabMainTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TABMAINTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TabSubTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TABSUBTITLE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::TeamViewModel* get_Team()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILTEAMITEMVIEWMODEL_GET_TEAM_OFFSET))(this);
		}
	};
}
