#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/TeamSizeType.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/TeamViewModel.h"

class Class_1_5C8F237BF51192A7;
class Class_1_6417078E6DA36F89;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardAvatarViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardSingleTeamInfo; }

#define RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1CBFA050)
#define RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET UNITYSDK_OFFSET(0x1CBFA010)
#define RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1CBFA060)
#define RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFA070)
#define RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL__ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBFA110)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int SingleTeamViewModel_TypeDefinitionIndex = 79488;

	class SingleTeamViewModel : public ::RPG::Client::FateRin::CaseBoard::TeamViewModel
	{
	public:
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* _Avatar_k__BackingField; // 0x48

		::System::Void _ctor(::RPG::GameCore::FateRinCaseBoardSingleTeamInfo* a1, ::Class_1_5C8F237BF51192A7* a2, ::Class_1_6417078E6DA36F89* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*, ::Class_1_5C8F237BF51192A7*, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FateRin::CaseBoard::TeamSizeType get_TeamSize()
		{
			return ((::RPG::Client::FateRin::CaseBoard::TeamSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_GET_TEAMSIZE_OFFSET))(this);
		}

		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* get_Avatar()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnUpdate(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_SINGLETEAMVIEWMODEL__ONUPDATE_OFFSET))(this, a1);
		}
	};
}
