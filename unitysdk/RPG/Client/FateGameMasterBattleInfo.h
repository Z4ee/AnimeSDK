#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_21C7581DFE99F091_37;
class Class_1_B4F136441499BAFA_2;
class Class_1_D40936EF3BF54118_22;
class Class_1_D40936EF3BF54118_23;
class Class_1_F3CA30716D4FAF92_7;
class Class_1_F9FBCC956DFCF137_18;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET UNITYSDK_OFFSET(0x1C1839C0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C17E800)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETALLMASTERS_OFFSET UNITYSDK_OFFSET(0x1C1847C0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET UNITYSDK_OFFSET(0x1C184C40)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETDEADMASTERS_OFFSET UNITYSDK_OFFSET(0x1C184800)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1C184530)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1C1850D0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETPLAYERMASTER_OFFSET UNITYSDK_OFFSET(0x1C183D30)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_BATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0x1C185170)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_PLAYERMASTERAVATARREALID_OFFSET UNITYSDK_OFFSET(0x1C183A10)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET UNITYSDK_OFFSET(0x1C184FE0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET UNITYSDK_OFFSET(0x1C17F8C0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET UNITYSDK_OFFSET(0x1C17F150)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET UNITYSDK_OFFSET(0x1C17FEB0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET UNITYSDK_OFFSET(0x1C17F0E0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET UNITYSDK_OFFSET(0x1C17F620)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CLEARBATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0x1C183B10)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17E410)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET UNITYSDK_OFFSET(0x1C184620)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo_TypeDefinitionIndex = 64149;

	class FateGameMasterBattleInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _ServerSyncPlayerMasterAvatarID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* _MasterItems; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::IFateGameMasterInfoItem*>>* _BattleMasterPairs; // 0x18
		::RPG::Client::FateGameData* _OwnerRef; // 0x20
		::Class_1_F9FBCC956DFCF137_18* _ParamProxyFactory; // 0x28

		::System::Void _ctor(::RPG::Client::FateGameData* a1, ::Class_1_F9FBCC956DFCF137_18* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*, ::Class_1_F9FBCC956DFCF137_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 ConvertServerSyncAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncMasters(::Class_1_D40936EF3BF54118_22* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET))(this, a1);
		}

		::System::Void SyncMasters_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_7*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET))(this, a1);
		}

		::System::Void SyncOneMaster(::Class_1_F3CA30716D4FAF92_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET))(this, a1);
		}

		::System::Void SyncMasterBattlePairs(::Class_1_D40936EF3BF54118_23* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET))(this, a1);
		}

		::System::Void SyncMasterBattlePairs_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B4F136441499BAFA_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET))(this, a1);
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

		::RPG::Client::IFateGameMasterInfoRealItem* GetMasterByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::IFateGameMasterInfoItem* GetCurPlayerRivalMaster()
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET))(this);
		}

		::System::Boolean IsCurRoundBattleMaster(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET))(this, a1);
		}

		::System::UInt32 GetMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::IFateGameMasterInfoItem* _GetBattleMasterPairItemByProto(::Class_1_21C7581DFE99F091_37* a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID, ::Class_1_21C7581DFE99F091_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET))(this, a1);
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
