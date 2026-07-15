#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7EEA5E93C4D09894;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::TeamTowers { class TeamTowersFriendData; }
namespace RPG::Client::TeamTowers { class TeamTowersLobby; }
namespace RPG::Client::TeamTowers { class TeamTowersPVPService; }
namespace RPG::Client::TeamTowers { class TeamTowersRobotData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0x1857DDD0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETLOBBY_OFFSET UNITYSDK_OFFSET(0x1857E780)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETROBOTDATA_OFFSET UNITYSDK_OFFSET(0x1857E5B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETROBOTIDLIST_OFFSET UNITYSDK_OFFSET(0x1857E0D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_INVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x1857E6C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_INVITEROBOT_OFFSET UNITYSDK_OFFSET(0x1857E720)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_ISFRIENDINLOBBY_OFFSET UNITYSDK_OFFSET(0x1857E610)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_UPDATEFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1857DAA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL__COMPAREFRIEND_OFFSET UNITYSDK_OFFSET(0x1857E840)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1857D9E0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersInviteFriendViewModel_TypeDefinitionIndex = 75095;

	class TeamTowersInviteFriendViewModel : public ::System::Object
	{
	public:
		::RPG::Client::TeamTowers::TeamTowersPVPService* _PVPService; // 0x10
		::Class_1_7EEA5E93C4D09894* _Repository; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* UpdateFriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_UPDATEFRIENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersFriendData*>* GetFriendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersFriendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETFRIENDDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRobotIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETROBOTIDLIST_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::TeamTowersRobotData* GetRobotData(::System::UInt32 a1)
		{
			return ((::RPG::Client::TeamTowers::TeamTowersRobotData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETROBOTDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsFriendInLobby(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_ISFRIENDINLOBBY_OFFSET))(this, a1);
		}

		::System::Void InviteFriend(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_INVITEFRIEND_OFFSET))(this, a1);
		}

		::System::Void InviteRobot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_INVITEROBOT_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersLobby* GetLobby()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL_GETLOBBY_OFFSET))(this);
		}

		::System::Int32 _CompareFriend(::RPG::Client::TeamTowers::TeamTowersFriendData* a1, ::RPG::Client::TeamTowers::TeamTowersFriendData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersFriendData*, ::RPG::Client::TeamTowers::TeamTowersFriendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL__COMPAREFRIEND_OFFSET))(this, a1, a2);
		}
	};
}
