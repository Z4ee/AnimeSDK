#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_107;
class Class_1_BA24A41F4599D5E6;
class Class_1_D17272E82AE804C2_1195;
class Class_1_D17272E82AE804C2_1196;
class Class_1_F3CA30716D4FAF92_19;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class TreasureDungeonBaseGrid; }
namespace RPG::Client { class TreasureDungeonBuff; }
namespace RPG::Client { class TreasureDungeonItem; }
namespace RPG::Client { class TreasureDungeonNotifyParam; }
namespace RPG::Client { class TreasureDungeonTeamData; }
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace RPG::GameCore { class TreasureDungeonConfigRow; }
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONLEVEL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2C5A90)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2C5990)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETALLGRIDBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B2C9100)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1B2C8510)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0x1B2C85D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2C9F60)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETNEXTSTEPMINUSEXPLOREPOINTBYMONSTER_OFFSET UNITYSDK_OFFSET(0x1B2C9960)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXADD_OFFSET UNITYSDK_OFFSET(0x1B2C4150)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXICON_OFFSET UNITYSDK_OFFSET(0x1B2C4340)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXNAME_OFFSET UNITYSDK_OFFSET(0x1B2C42D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTENVIRONMENTBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CB230)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTFLOORBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CB250)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ENEMYNUM_OFFSET UNITYSDK_OFFSET(0x1B2CB1B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_EXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0x1B2CB0E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1B2CB0A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x1B2C41F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x1B2CAFD0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTBATTLEGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2CB270)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2CB290)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDPARAM_OFFSET UNITYSDK_OFFSET(0x1B2CB2B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDTYPE_OFFSET UNITYSDK_OFFSET(0x1B2CB2D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B2CB080)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x1B2CB0C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXEXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0x1B2CB100)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB1F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_REFRESHPARAM_OFFSET UNITYSDK_OFFSET(0x1B2C8590)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B2C94C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0x1B2C4110)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ULTRAITEM_OFFSET UNITYSDK_OFFSET(0x1B2CB210)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_WAITNUM_OFFSET UNITYSDK_OFFSET(0x1B2CB1D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTENVIRONMENTBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CB240)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTFLOORBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CB260)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ENEMYNUM_OFFSET UNITYSDK_OFFSET(0x1B2CB1C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_EXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0x1B2CB0F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1B2CB0B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTBATTLEGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2CB280)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x1B2CB2A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDPARAM_OFFSET UNITYSDK_OFFSET(0x1B2CB2C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDTYPE_OFFSET UNITYSDK_OFFSET(0x1B2CB2E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B2CB090)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x1B2CB0D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAXFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2CB200)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ULTRAITEM_OFFSET UNITYSDK_OFFSET(0x1B2CB220)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_WAITNUM_OFFSET UNITYSDK_OFFSET(0x1B2CB1E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SHOULDEXIT_OFFSET UNITYSDK_OFFSET(0x1B2C43A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SYNC_OFFSET UNITYSDK_OFFSET(0x1B2C6010)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFIGHT_OFFSET UNITYSDK_OFFSET(0x1B2C87C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFLIPGRID_OFFSET UNITYSDK_OFFSET(0x1B2C8680)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYINTERACT_OFFSET UNITYSDK_OFFSET(0x1B2C8C20)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEITEM_OFFSET UNITYSDK_OFFSET(0x1B2C8E50)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEULTRA_OFFSET UNITYSDK_OFFSET(0x1B2C8FA0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYEXPLORE_OFFSET UNITYSDK_OFFSET(0x1B2C9290)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYMONSTER_OFFSET UNITYSDK_OFFSET(0x1B2C9840)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEAD_OFFSET UNITYSDK_OFFSET(0x1B2C9DA0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C5740)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__GETRECORDDATAPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B2CAF70)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__INITMAXFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2C5920)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__ISENVBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CAEB0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__ISFLOORBUFF_OFFSET UNITYSDK_OFFSET(0x1B2CAF10)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x1B2C7B30)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHEXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0x1B2C65B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHFLOOR_OFFSET UNITYSDK_OFFSET(0x1B2C6550)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x1B2C7550)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x1B2C66B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMONSTER_OFFSET UNITYSDK_OFFSET(0x1B2C6610)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHRECORD_OFFSET UNITYSDK_OFFSET(0x1B2C7310)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMDATA_OFFSET UNITYSDK_OFFSET(0x1B2C72B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x1B2CA260)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1B2CA1B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHWAITNUM_OFFSET UNITYSDK_OFFSET(0x1B2C6660)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__SETGRID_OFFSET UNITYSDK_OFFSET(0x1B2CA100)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL___REFRESHRECORD_B__32_0_OFFSET UNITYSDK_OFFSET(0x1B2CB2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonLevel_TypeDefinitionIndex = 68187;

	class TreasureDungeonLevel : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _ROWCOUNT = 0x5; // 0x0
		// static const ::System::UInt32 _COLUMNCOUNT = 0x5; // 0x0
		// static const ::System::UInt32 _TOTALGRIDCOUNT = 0x19; // 0x0
		// static const ::System::UInt32 _FLOORCOUNTLIMIT = 0x3E8; // 0x0
		::RPG::Client::TreasureDungeonItem* _UltraItem_k__BackingField; // 0x10
		::RPG::GameCore::TreasureDungeonConfigRow* _Row; // 0x18
		::RPG::Client::TreasureDungeonNotifyParam* _RefreshParam; // 0x20
		::Il2CppArray<::RPG::Client::TreasureDungeonBaseGrid*>* _AllGrids; // 0x28
		::RPG::Client::TreasureDungeonBuff* _CurrentEnvironmentBuff_k__BackingField; // 0x30
		::RPG::Client::TreasureDungeonBuff* _CurrentFloorBuff_k__BackingField; // 0x38
		::RPG::Client::TreasureDungeonTeamData* _TeamData; // 0x40
		::RPG::GameCore::TreasureDungeonGroupConfigRow* _GroupRow; // 0x48
		::System::UInt32 _MaxFloor_k__BackingField; // 0x50
		::System::UInt32 _LastBattleGridIndex_k__BackingField; // 0x54
		::System::UInt32 _FloorID_k__BackingField; // 0x58
		::System::UInt32 _LevelID_k__BackingField; // 0x5C
		::System::UInt32 _WaitNum_k__BackingField; // 0x60
		::System::UInt32 _ExplorePoint_k__BackingField; // 0x64
		::RPG::GameCore::TreasureDungeonGridType _LastInteractGridType_k__BackingField; // 0x68
		::System::UInt32 _EnemyNum_k__BackingField; // 0x6C
		::System::UInt32 _LastInteractGridIndex_k__BackingField; // 0x70
		::System::UInt32 _MapID_k__BackingField; // 0x74
		::System::UInt32 _LastInteractGridParam_k__BackingField; // 0x78

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_BA24A41F4599D5E6* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA24A41F4599D5E6*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TreasureDungeonBaseGrid* GetGridByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean ShouldExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SHOULDEXIT_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonBaseGrid* GetGridByRowColumn(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYROWCOLUMN_OFFSET))(this, a1, a2);
		}

		::System::Void TryFlipGrid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFLIPGRID_OFFSET))(this, a1);
		}

		::System::Void TryFight(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void TryInteract(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYINTERACT_OFFSET))(this, a1, a2);
		}

		::System::Void TryUseItem(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void TryUseUltra(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEULTRA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonBaseGrid*>* GetAllGridByType(::RPG::GameCore::TreasureDungeonGridType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonBaseGrid*>*(*)(::PVOID, ::RPG::GameCore::TreasureDungeonGridType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETALLGRIDBYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean WillAvatarDeadByExplore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYEXPLORE_OFFSET))(this);
		}

		::System::Boolean WillAvatarDeadByMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYMONSTER_OFFSET))(this);
		}

		::System::Boolean WillAvatarDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEAD_OFFSET))(this);
		}

		::System::UInt32 GetNextStepMinusExplorePointByMonster()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETNEXTSTEPMINUSEXPLOREPOINTBYMONSTER_OFFSET))(this);
		}

		::System::UInt32 GetMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETMONSTERLEVEL_OFFSET))(this);
		}

		::System::Void _SetGrid(::System::UInt32 a1, ::RPG::Client::TreasureDungeonBaseGrid* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureDungeonBaseGrid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__SETGRID_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHFLOOR_OFFSET))(this, a1);
		}

		::System::Void _RefreshExplorePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHEXPLOREPOINT_OFFSET))(this, a1);
		}

		::System::Void _RefreshMap(::System::Collections::Generic::IList_1<::Class_1_F3CA30716D4FAF92_19*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_F3CA30716D4FAF92_19*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMAP_OFFSET))(this, a1);
		}

		::System::Void _RefreshWaitNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHWAITNUM_OFFSET))(this, a1);
		}

		::System::Void _RefreshMonster(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMONSTER_OFFSET))(this, a1);
		}

		::System::Void _RefreshTeamData(::Class_1_BA24A41F4599D5E6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA24A41F4599D5E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshTeamProperty(::Class_1_BA24A41F4599D5E6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA24A41F4599D5E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMPROPERTY_OFFSET))(this, a1);
		}

		::System::Void _RefreshTeamMember(::Class_1_BA24A41F4599D5E6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA24A41F4599D5E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMMEMBER_OFFSET))(this, a1);
		}

		::System::Void _RefreshItem(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1196*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1196*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHITEM_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuff(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1195*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1195*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHBUFF_OFFSET))(this, a1);
		}

		::System::Void _InitMaxFloor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__INITMAXFLOOR_OFFSET))(this);
		}

		::System::Boolean _IsEnvBuff(::RPG::GameCore::TreasureDungeonBuffConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__ISENVBUFF_OFFSET))(this, a1);
		}

		::System::Boolean _IsFloorBuff(::RPG::GameCore::TreasureDungeonBuffConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__ISFLOORBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshRecord(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_107*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_107*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHRECORD_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRecordDataPriority(::Class_1_1CBA230307F9C289_107* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_1CBA230307F9C289_107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__GETRECORDDATAPRIORITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::TreasureDungeonConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TreasureDungeonConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonGroupConfigRow* get_GroupRow()
		{
			return ((::RPG::GameCore::TreasureDungeonGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_GROUPROW_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ISHARD_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExplorePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_EXPLOREPOINT_OFFSET))(this);
		}

		::System::Void set_ExplorePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_EXPLOREPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxExplorePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXEXPLOREPOINT_OFFSET))(this);
		}

		::System::UInt32 get_EnemyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ENEMYNUM_OFFSET))(this);
		}

		::System::Void set_EnemyNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ENEMYNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_WAITNUM_OFFSET))(this);
		}

		::System::Void set_WaitNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_WAITNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxFloor()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXFLOOR_OFFSET))(this);
		}

		::System::Void set_MaxFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAXFLOOR_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonItem* get_UltraItem()
		{
			return ((::RPG::Client::TreasureDungeonItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ULTRAITEM_OFFSET))(this);
		}

		::System::Void set_UltraItem(::RPG::Client::TreasureDungeonItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ULTRAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonTeamData* get_TeamData()
		{
			return ((::RPG::Client::TreasureDungeonTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_TEAMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ATKExAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXADD_OFFSET))(this);
		}

		::RPG::Client::TextID get_ATKExName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXNAME_OFFSET))(this);
		}

		::System::String* get_ATKExIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXICON_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonBuff* get_CurrentEnvironmentBuff()
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTENVIRONMENTBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentEnvironmentBuff(::RPG::Client::TreasureDungeonBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTENVIRONMENTBUFF_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonBuff* get_CurrentFloorBuff()
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTFLOORBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentFloorBuff(::RPG::Client::TreasureDungeonBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTFLOORBUFF_OFFSET))(this, a1);
		}

		::RPG::Client::TreasureDungeonNotifyParam* get_RefreshParam()
		{
			return ((::RPG::Client::TreasureDungeonNotifyParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_REFRESHPARAM_OFFSET))(this);
		}

		::System::UInt32 get_LastBattleGridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTBATTLEGRIDINDEX_OFFSET))(this);
		}

		::System::Void set_LastBattleGridIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTBATTLEGRIDINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastInteractGridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDINDEX_OFFSET))(this);
		}

		::System::Void set_LastInteractGridIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastInteractGridParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDPARAM_OFFSET))(this);
		}

		::System::Void set_LastInteractGridParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDPARAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::TreasureDungeonGridType get_LastInteractGridType()
		{
			return ((::RPG::GameCore::TreasureDungeonGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDTYPE_OFFSET))(this);
		}

		::System::Void set_LastInteractGridType(::RPG::GameCore::TreasureDungeonGridType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeonGridType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDTYPE_OFFSET))(this, a1);
		}

		::System::Int32 __RefreshRecord_b__32_0(::Class_1_1CBA230307F9C289_107* a1, ::Class_1_1CBA230307F9C289_107* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1CBA230307F9C289_107*, ::Class_1_1CBA230307F9C289_107*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL___REFRESHRECORD_B__32_0_OFFSET))(this, a1, a2);
		}
	};
}
