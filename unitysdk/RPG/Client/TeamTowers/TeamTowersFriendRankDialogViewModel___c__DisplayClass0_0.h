#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::TeamTowers { class TeamTowersFriendRankDialogViewModel; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A8A50)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__UPDATERANKINGDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1A3A9020)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__UPDATERANKINGDATA_B__1_OFFSET UNITYSDK_OFFSET(0x1A3A9060)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersFriendRankDialogViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 78585;

	class TeamTowersFriendRankDialogViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::TeamTowers::TeamTowersFriendRankDialogViewModel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateRankingData_b__0(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__UPDATERANKINGDATA_B__0_OFFSET))(this, a1);
		}

		::System::Void _UpdateRankingData_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSFRIENDRANKDIALOGVIEWMODEL___C__DISPLAYCLASS0_0__UPDATERANKINGDATA_B__1_OFFSET))(this, a1);
		}
	};
}
