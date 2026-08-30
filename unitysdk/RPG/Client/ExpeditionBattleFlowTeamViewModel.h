#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_35B8E94AA1DBDC5E;
class Class_1_E2FB7E5A9E3705C7_1;
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88C010)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETBOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88C0B0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETCOMMONTALK_OFFSET UNITYSDK_OFFSET(0x1B88C600)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETSTARTTALK_OFFSET UNITYSDK_OFFSET(0x1B88C150)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETVICTORYTALK_OFFSET UNITYSDK_OFFSET(0x1B88C770)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88BF90)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1B88BFB0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1B88BF50)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x1B88BF70)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88BFA0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1B88BFC0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0x1B88BF60)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAM_OFFSET UNITYSDK_OFFSET(0x1B88BF80)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88BFD0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__GETFIRSTAVAILABLETALK_OFFSET UNITYSDK_OFFSET(0x1B88C2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowTeamViewModel_TypeDefinitionIndex = 63978;

	class ExpeditionBattleFlowTeamViewModel : public ::System::Object
	{
	public:
		::System::String* _MainMonsterIconPath_k__BackingField; // 0x10
		::Class_1_35B8E94AA1DBDC5E* _DisplayService; // 0x18
		::RPG::Client::ExpeditionBattleTeam* _Team_k__BackingField; // 0x20
		::System::UInt32 _RouteID_k__BackingField; // 0x28
		::System::Int32 _TeamIndex_k__BackingField; // 0x2C

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ExpeditionBattleTeam* a2, ::RPG::Client::ExpeditionBattleRoute* a3, ::Class_1_35B8E94AA1DBDC5E* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ExpeditionBattleTeam*, ::RPG::Client::ExpeditionBattleRoute*, ::Class_1_35B8E94AA1DBDC5E*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_TeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAMINDEX_OFFSET))(this);
		}

		::System::Void set_TeamIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeam* get_Team()
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::Client::ExpeditionBattleTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAM_OFFSET))(this, a1);
		}

		::System::String* get_MainMonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET))(this);
		}

		::System::Void set_MainMonsterIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::String* GetAvatarIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETAVATARICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetBoardAvatarIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETBOARDAVATARICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetStartTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETSTARTTALK_OFFSET))(this);
		}

		::RPG::Client::TextID GetCommonTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETCOMMONTALK_OFFSET))(this);
		}

		::RPG::Client::TextID GetVictoryTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETVICTORYTALK_OFFSET))(this);
		}

		::RPG::Client::TextID _GetFirstAvailableTalk(::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Func_2<::Class_1_E2FB7E5A9E3705C7_1*, ::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__GETFIRSTAVAILABLETALK_OFFSET))(this, a1);
		}
	};
}
