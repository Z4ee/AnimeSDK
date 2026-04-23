#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_21C7581DFE99F091_29;
class Class_1_B4F136441499BAFA_1;
class Class_1_D40936EF3BF54118_20;
class Class_1_D40936EF3BF54118_22;
class Class_1_F3CA30716D4FAF92_10;
class Class_1_F9FBCC956DFCF137_10;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET UNITYSDK_OFFSET(0xA340970)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA33C090)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETALLMASTERS_OFFSET UNITYSDK_OFFSET(0xA341700)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET UNITYSDK_OFFSET(0xA341A80)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETDEADMASTERS_OFFSET UNITYSDK_OFFSET(0xA341740)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA3414A0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA341EC0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETPLAYERMASTER_OFFSET UNITYSDK_OFFSET(0xA340CC0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_BATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0xA341F60)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_PLAYERMASTERAVATARREALID_OFFSET UNITYSDK_OFFSET(0xA3409C0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET UNITYSDK_OFFSET(0xA341DE0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET UNITYSDK_OFFSET(0xA33D2A0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET UNITYSDK_OFFSET(0xA33C9F0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET UNITYSDK_OFFSET(0xA33D710)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET UNITYSDK_OFFSET(0xA33C980)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET UNITYSDK_OFFSET(0xA33D060)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CLEARBATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0xA340AC0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33BC40)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET UNITYSDK_OFFSET(0xA341570)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo_TypeDefinitionIndex = 58953;

	class FateGameMasterBattleInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _ServerSyncPlayerMasterAvatarID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* _MasterItems; // 0x10
		::Class_1_F9FBCC956DFCF137_10* _ParamProxyFactory; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>* _BattleMasterPairs; // 0x20
		::RPG::Client::FateGameData* _OwnerRef; // 0x28

		::System::Void _ctor(::RPG::Client::FateGameData* owner, ::Class_1_F9FBCC956DFCF137_10* paramProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CTOR_OFFSET))(this, owner, paramProxyFactory);
		}

		static ::System::UInt32 ConvertServerSyncAvatarID(::System::UInt32 serverSyncAvatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET))(serverSyncAvatarID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncMasters(::Class_1_D40936EF3BF54118_20* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET))(this, proto);
		}

		::System::Void SyncMasters_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_10*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET))(this, proto);
		}

		::System::Void SyncOneMaster(::Class_1_F3CA30716D4FAF92_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET))(this, proto);
		}

		::System::Void SyncMasterBattlePairs(::Class_1_D40936EF3BF54118_22* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET))(this, proto);
		}

		::System::Void SyncMasterBattlePairs_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_1*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* GetAllMasters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETALLMASTERS_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterInfoPlayerItem* GetPlayerMaster()
		{
			return ((::RPG::Client::FateGameMasterInfoPlayerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETPLAYERMASTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* GetDeadMasters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETDEADMASTERS_OFFSET))(this);
		}

		::RPG::Client::IFateGameMasterInfoRealItem* GetMasterByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET))(this, avatarID);
		}

		::RPG::Client::IFateGameMasterInfoItem* GetCurPlayerRivalMaster()
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET))(this);
		}

		::System::Boolean IsCurRoundBattleMaster(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET))(this, master);
		}

		::System::UInt32 GetMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::IFateGameMasterInfoItem* _GetBattleMasterPairItemByProto(::Class_1_21C7581DFE99F091_29* proto)
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID, ::Class_1_21C7581DFE99F091_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET))(this, proto);
		}

		::System::Void _ClearBattleMasterPairs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CLEARBATTLEMASTERPAIRS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>* get_BattleMasterPairs()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_BATTLEMASTERPAIRS_OFFSET))(this);
		}

		static ::System::UInt32 get_PlayerMasterAvatarRealID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_PLAYERMASTERAVATARREALID_OFFSET))();
		}
	};
}
