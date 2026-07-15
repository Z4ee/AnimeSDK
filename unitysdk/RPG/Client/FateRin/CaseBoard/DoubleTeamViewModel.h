#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/TeamSizeType.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/TeamViewModel.h"

class Class_1_5C8F237BF51192A7;
class Class_1_6417078E6DA36F89;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardAvatarViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardServantViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class HouguViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardDoubleTeamInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_HOUGU_OFFSET UNITYSDK_OFFSET(0x1A37F2C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_ISSHOWMASTERTAG_OFFSET UNITYSDK_OFFSET(0x1A37F280)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x1A37F260)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1A37F2A0)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET UNITYSDK_OFFSET(0x1A37F210)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_HOUGU_OFFSET UNITYSDK_OFFSET(0x1A37F2D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_ISSHOWMASTERTAG_OFFSET UNITYSDK_OFFSET(0x1A37F290)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_MASTER_OFFSET UNITYSDK_OFFSET(0x1A37F270)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1A37F2B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37F2E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A37F6A0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int DoubleTeamViewModel_TypeDefinitionIndex = 75854;

	class DoubleTeamViewModel : public ::RPG::Client::FateRin::CaseBoard::TeamViewModel
	{
	public:
		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* _Servant_k__BackingField; // 0x48
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* _Master_k__BackingField; // 0x50
		::RPG::Client::FateRin::CaseBoard::HouguViewModel* _Hougu_k__BackingField; // 0x58
		::System::Boolean _IsShowMasterTag_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo* a1, ::Class_1_5C8F237BF51192A7* a2, ::Class_1_6417078E6DA36F89* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*, ::Class_1_5C8F237BF51192A7*, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::CaseBoard::TeamSizeType get_TeamSize()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* get_Master()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_MASTER_OFFSET))(this);
		}

		::System::Void set_Master(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_MASTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowMasterTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_ISSHOWMASTERTAG_OFFSET))(this);
		}

		::System::Void set_IsShowMasterTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_ISSHOWMASTERTAG_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}

		::System::Void set_Servant(::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_SERVANT_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::HouguViewModel* get_Hougu()
		{
			return ((::RPG::Client::FateRin::CaseBoard::HouguViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_GET_HOUGU_OFFSET))(this);
		}

		::System::Void set_Hougu(::RPG::Client::FateRin::CaseBoard::HouguViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::HouguViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL_SET_HOUGU_OFFSET))(this, a1);
		}

		::System::Void _OnUpdate(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_DOUBLETEAMVIEWMODEL__ONUPDATE_OFFSET))(this, a1);
		}
	};
}
