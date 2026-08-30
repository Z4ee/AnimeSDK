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
namespace RPG::GameCore { class FateRinCaseBoardTripleTeamInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_HOUGU1_OFFSET UNITYSDK_OFFSET(0x1CBFAE20)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_HOUGU2_OFFSET UNITYSDK_OFFSET(0x1CBFAE40)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_ISSHOWMASTER2TAG_OFFSET UNITYSDK_OFFSET(0x1CBFAE00)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_ISSHOWMASTERTAG_OFFSET UNITYSDK_OFFSET(0x1CBFADA0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_MASTER2_OFFSET UNITYSDK_OFFSET(0x1CBFADE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x1CBFAD80)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1CBFADC0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET UNITYSDK_OFFSET(0x1CBFAD30)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_HOUGU1_OFFSET UNITYSDK_OFFSET(0x1CBFAE30)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_HOUGU2_OFFSET UNITYSDK_OFFSET(0x1CBFAE50)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_ISSHOWMASTER2TAG_OFFSET UNITYSDK_OFFSET(0x1CBFAE10)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_ISSHOWMASTERTAG_OFFSET UNITYSDK_OFFSET(0x1CBFADB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_MASTER2_OFFSET UNITYSDK_OFFSET(0x1CBFADF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_MASTER_OFFSET UNITYSDK_OFFSET(0x1CBFAD90)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1CBFADD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFAE60)
#define RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBFB060)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TripleTeamViewModel_TypeDefinitionIndex = 79493;

	class TripleTeamViewModel : public ::RPG::Client::FateRin::CaseBoard::TeamViewModel
	{
	public:
		::RPG::Client::FateRin::CaseBoard::HouguViewModel* _Hougu2_k__BackingField; // 0x48
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* _Master2_k__BackingField; // 0x50
		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* _Servant_k__BackingField; // 0x58
		::RPG::Client::FateRin::CaseBoard::HouguViewModel* _Hougu1_k__BackingField; // 0x60
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* _Master_k__BackingField; // 0x68
		::System::Boolean _IsShowMasterTag_k__BackingField; // 0x70
		::System::Boolean _IsShowMaster2Tag_k__BackingField; // 0x71

		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardTripleTeamInfo* a1, ::Class_1_5C8F237BF51192A7* a2, ::Class_1_6417078E6DA36F89* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*, ::Class_1_5C8F237BF51192A7*, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::CaseBoard::TeamSizeType get_TeamSize()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* get_Master()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_MASTER_OFFSET))(this);
		}

		::System::Void set_Master(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_MASTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowMasterTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_ISSHOWMASTERTAG_OFFSET))(this);
		}

		::System::Void set_IsShowMasterTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_ISSHOWMASTERTAG_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}

		::System::Void set_Servant(::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_SERVANT_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* get_Master2()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_MASTER2_OFFSET))(this);
		}

		::System::Void set_Master2(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_MASTER2_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowMaster2Tag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_ISSHOWMASTER2TAG_OFFSET))(this);
		}

		::System::Void set_IsShowMaster2Tag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_ISSHOWMASTER2TAG_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::HouguViewModel* get_Hougu1()
		{
			return ((::RPG::Client::FateRin::CaseBoard::HouguViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_HOUGU1_OFFSET))(this);
		}

		::System::Void set_Hougu1(::RPG::Client::FateRin::CaseBoard::HouguViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::HouguViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_HOUGU1_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::CaseBoard::HouguViewModel* get_Hougu2()
		{
			return ((::RPG::Client::FateRin::CaseBoard::HouguViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_GET_HOUGU2_OFFSET))(this);
		}

		::System::Void set_Hougu2(::RPG::Client::FateRin::CaseBoard::HouguViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::HouguViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL_SET_HOUGU2_OFFSET))(this, a1);
		}

		::System::Void _OnUpdate(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_TRIPLETEAMVIEWMODEL__ONUPDATE_OFFSET))(this, a1);
		}
	};
}
