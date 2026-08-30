#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_48AADA497C3F117F_3;
class Class_1_8831ADA1771A2099;
class Class_1_D17272E82AE804C2_51;
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5092E2281751B550_1_GET_ACHIEVEMENTIDLIST_OFFSET UNITYSDK_OFFSET(0x180C4390)
#define CLASS_1_5092E2281751B550_1_GET_ALLYOUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x180C43D0)
#define CLASS_1_5092E2281751B550_1_GET_ALLYPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x180C4530)
#define CLASS_1_5092E2281751B550_1_GET_BREAKRECORD_OFFSET UNITYSDK_OFFSET(0x180C43F0)
#define CLASS_1_5092E2281751B550_1_GET_BREAKWAVECOUNTRECORD_OFFSET UNITYSDK_OFFSET(0x180C4410)
#define CLASS_1_5092E2281751B550_1_GET_BRICKCOUNT_OFFSET UNITYSDK_OFFSET(0x180C4590)
#define CLASS_1_5092E2281751B550_1_GET_CASTSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x180C4350)
#define CLASS_1_5092E2281751B550_1_GET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x180C4310)
#define CLASS_1_5092E2281751B550_1_GET_EXPOBTAINED_OFFSET UNITYSDK_OFFSET(0x180C4490)
#define CLASS_1_5092E2281751B550_1_GET_FIRSTPASS_OFFSET UNITYSDK_OFFSET(0x180C44D0)
#define CLASS_1_5092E2281751B550_1_GET_HEIGHTLINECOUNT_OFFSET UNITYSDK_OFFSET(0x180C4330)
#define CLASS_1_5092E2281751B550_1_GET_ISPVPMODE_OFFSET UNITYSDK_OFFSET(0x180C4550)
#define CLASS_1_5092E2281751B550_1_GET_LEVELGAMEMODE_OFFSET UNITYSDK_OFFSET(0x180C4570)
#define CLASS_1_5092E2281751B550_1_GET_PLAYEROUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x180C43B0)
#define CLASS_1_5092E2281751B550_1_GET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x180C4510)
#define CLASS_1_5092E2281751B550_1_GET_PREVEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x180C4450)
#define CLASS_1_5092E2281751B550_1_GET_PREVLEVELTOTALEXP_OFFSET UNITYSDK_OFFSET(0x180C4470)
#define CLASS_1_5092E2281751B550_1_GET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x180C4430)
#define CLASS_1_5092E2281751B550_1_GET_SETTLEEXPINFOLIST_OFFSET UNITYSDK_OFFSET(0x180C44F0)
#define CLASS_1_5092E2281751B550_1_GET_SILVERWOLFEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x180C44B0)
#define CLASS_1_5092E2281751B550_1_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x180C42F0)
#define CLASS_1_5092E2281751B550_1_GET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x180C4370)
#define CLASS_1_5092E2281751B550_1_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x180C42D0)
#define CLASS_1_5092E2281751B550_1_GET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0x180C45B0)
#define CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x180C4630)
#define CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x180C4690)
#define CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x180C45D0)
#define CLASS_1_5092E2281751B550_1_METHOD_1_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x180C3D10)
#define CLASS_1_5092E2281751B550_1_METHOD_1_B3979E3234486027_OFFSET UNITYSDK_OFFSET(0x180C3D70)
#define CLASS_1_5092E2281751B550_1_SET_ACHIEVEMENTIDLIST_OFFSET UNITYSDK_OFFSET(0x180C43A0)
#define CLASS_1_5092E2281751B550_1_SET_ALLYOUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x180C43E0)
#define CLASS_1_5092E2281751B550_1_SET_ALLYPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x180C4540)
#define CLASS_1_5092E2281751B550_1_SET_BREAKRECORD_OFFSET UNITYSDK_OFFSET(0x180C4400)
#define CLASS_1_5092E2281751B550_1_SET_BREAKWAVECOUNTRECORD_OFFSET UNITYSDK_OFFSET(0x180C4420)
#define CLASS_1_5092E2281751B550_1_SET_BRICKCOUNT_OFFSET UNITYSDK_OFFSET(0x180C45A0)
#define CLASS_1_5092E2281751B550_1_SET_CASTSKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x180C4360)
#define CLASS_1_5092E2281751B550_1_SET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x180C4320)
#define CLASS_1_5092E2281751B550_1_SET_EXPOBTAINED_OFFSET UNITYSDK_OFFSET(0x180C44A0)
#define CLASS_1_5092E2281751B550_1_SET_FIRSTPASS_OFFSET UNITYSDK_OFFSET(0x180C44E0)
#define CLASS_1_5092E2281751B550_1_SET_HEIGHTLINECOUNT_OFFSET UNITYSDK_OFFSET(0x180C4340)
#define CLASS_1_5092E2281751B550_1_SET_ISPVPMODE_OFFSET UNITYSDK_OFFSET(0x180C4560)
#define CLASS_1_5092E2281751B550_1_SET_LEVELGAMEMODE_OFFSET UNITYSDK_OFFSET(0x180C4580)
#define CLASS_1_5092E2281751B550_1_SET_PLAYEROUTPUTNUM_OFFSET UNITYSDK_OFFSET(0x180C43C0)
#define CLASS_1_5092E2281751B550_1_SET_PLAYERPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x180C4520)
#define CLASS_1_5092E2281751B550_1_SET_PREVEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x180C4460)
#define CLASS_1_5092E2281751B550_1_SET_PREVLEVELTOTALEXP_OFFSET UNITYSDK_OFFSET(0x180C4480)
#define CLASS_1_5092E2281751B550_1_SET_PREVLEVEL_OFFSET UNITYSDK_OFFSET(0x180C4440)
#define CLASS_1_5092E2281751B550_1_SET_SETTLEEXPINFOLIST_OFFSET UNITYSDK_OFFSET(0x180C4500)
#define CLASS_1_5092E2281751B550_1_SET_SILVERWOLFEXTRAEXP_OFFSET UNITYSDK_OFFSET(0x180C44C0)
#define CLASS_1_5092E2281751B550_1_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x180C4300)
#define CLASS_1_5092E2281751B550_1_SET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x180C4380)
#define CLASS_1_5092E2281751B550_1_SET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x180C42E0)
#define CLASS_1_5092E2281751B550_1_SET_WAVECOUNT_OFFSET UNITYSDK_OFFSET(0x180C45C0)
#define CLASS_1_5092E2281751B550_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180C46F0)

inline static constexpr unsigned int Class_1_5092E2281751B550_1_TypeDefinitionIndex = 78567;

class Class_1_5092E2281751B550_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8831ADA1771A2099*>* _SettleExpInfoList_k__BackingField; // 0x10
	::RPG::Client::PlayerPlatformInfo* _PlayerPlatformInfo_k__BackingField; // 0x18
	::RPG::Client::PlayerPlatformInfo* _AllyPlatformInfo_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _AchievementIDList_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* _StarIDList_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_51*>* _CastSkillInfoList_k__BackingField; // 0x38
	::System::UInt32 _BrickCount_k__BackingField; // 0x40
	::System::UInt32 _WaveCount_k__BackingField; // 0x44
	::System::UInt32 _SilverWolfExtraExp_k__BackingField; // 0x48
	::System::UInt32 _PlayerOutputNum_k__BackingField; // 0x4C
	::System::UInt32 _PrevExtraExp_k__BackingField; // 0x50
	::System::Boolean _IsPvpMode_k__BackingField; // 0x54
	::System::Boolean _BreakRecord_k__BackingField; // 0x55
	::System::Boolean _FirstPass_k__BackingField; // 0x56
	::RPG::GameCore::TeamTowersLevelGameMode _LevelGameMode_k__BackingField; // 0x57
	::System::Boolean _BreakWaveCountRecord_k__BackingField; // 0x58
	::System::Boolean _Success_k__BackingField; // 0x59
	::System::UInt32 _PrevLevel_k__BackingField; // 0x5C
	::System::UInt32 _HeightLineCount_k__BackingField; // 0x60
	::System::UInt32 _DeadCount_k__BackingField; // 0x64
	::System::UInt32 _PrevLevelTotalExp_k__BackingField; // 0x68
	::System::UInt32 _StageID_k__BackingField; // 0x6C
	::System::UInt32 _AllyOutputNum_k__BackingField; // 0x70
	::System::UInt32 _ExpObtained_k__BackingField; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_842446766C7EDE9B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_METHOD_1_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_5092E2281751B550_1*>* Method_1_B3979E3234486027(::Class_1_48AADA497C3F117F_3* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_5092E2281751B550_1*>*(*)(::PVOID, ::Class_1_48AADA497C3F117F_3*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_METHOD_1_B3979E3234486027_OFFSET))(this, a1);
	}

	::System::Boolean get_Success()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_SUCCESS_OFFSET))(this);
	}

	::System::Void set_Success(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_SUCCESS_OFFSET))(this, a1);
	}

	::System::UInt32 get_StageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_STAGEID_OFFSET))(this);
	}

	::System::Void set_StageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_STAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_DeadCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_DEADCOUNT_OFFSET))(this);
	}

	::System::Void set_DeadCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_DEADCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_HeightLineCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_HEIGHTLINECOUNT_OFFSET))(this);
	}

	::System::Void set_HeightLineCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_HEIGHTLINECOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_51*>* get_CastSkillInfoList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_51*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_CASTSKILLINFOLIST_OFFSET))(this);
	}

	::System::Void set_CastSkillInfoList(::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_51*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_51*>*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_CASTSKILLINFOLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_StarIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_STARIDLIST_OFFSET))(this);
	}

	::System::Void set_StarIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_STARIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AchievementIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_ACHIEVEMENTIDLIST_OFFSET))(this);
	}

	::System::Void set_AchievementIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_ACHIEVEMENTIDLIST_OFFSET))(this, a1);
	}

	::System::UInt32 get_PlayerOutputNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_PLAYEROUTPUTNUM_OFFSET))(this);
	}

	::System::Void set_PlayerOutputNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_PLAYEROUTPUTNUM_OFFSET))(this, a1);
	}

	::System::UInt32 get_AllyOutputNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_ALLYOUTPUTNUM_OFFSET))(this);
	}

	::System::Void set_AllyOutputNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_ALLYOUTPUTNUM_OFFSET))(this, a1);
	}

	::System::Boolean get_BreakRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_BREAKRECORD_OFFSET))(this);
	}

	::System::Void set_BreakRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_BREAKRECORD_OFFSET))(this, a1);
	}

	::System::Boolean get_BreakWaveCountRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_BREAKWAVECOUNTRECORD_OFFSET))(this);
	}

	::System::Void set_BreakWaveCountRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_BREAKWAVECOUNTRECORD_OFFSET))(this, a1);
	}

	::System::UInt32 get_PrevLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_PREVLEVEL_OFFSET))(this);
	}

	::System::Void set_PrevLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_PREVLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PrevExtraExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_PREVEXTRAEXP_OFFSET))(this);
	}

	::System::Void set_PrevExtraExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_PREVEXTRAEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_PrevLevelTotalExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_PREVLEVELTOTALEXP_OFFSET))(this);
	}

	::System::Void set_PrevLevelTotalExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_PREVLEVELTOTALEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_ExpObtained()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_EXPOBTAINED_OFFSET))(this);
	}

	::System::Void set_ExpObtained(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_EXPOBTAINED_OFFSET))(this, a1);
	}

	::System::UInt32 get_SilverWolfExtraExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_SILVERWOLFEXTRAEXP_OFFSET))(this);
	}

	::System::Void set_SilverWolfExtraExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_SILVERWOLFEXTRAEXP_OFFSET))(this, a1);
	}

	::System::Boolean get_FirstPass()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_FIRSTPASS_OFFSET))(this);
	}

	::System::Void set_FirstPass(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_FIRSTPASS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_8831ADA1771A2099*>* get_SettleExpInfoList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8831ADA1771A2099*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_SETTLEEXPINFOLIST_OFFSET))(this);
	}

	::System::Void set_SettleExpInfoList(::System::Collections::Generic::List_1<::Class_1_8831ADA1771A2099*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8831ADA1771A2099*>*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_SETTLEEXPINFOLIST_OFFSET))(this, a1);
	}

	::RPG::Client::PlayerPlatformInfo* get_PlayerPlatformInfo()
	{
		return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_PLAYERPLATFORMINFO_OFFSET))(this);
	}

	::System::Void set_PlayerPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_PLAYERPLATFORMINFO_OFFSET))(this, a1);
	}

	::RPG::Client::PlayerPlatformInfo* get_AllyPlatformInfo()
	{
		return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_ALLYPLATFORMINFO_OFFSET))(this);
	}

	::System::Void set_AllyPlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_ALLYPLATFORMINFO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPvpMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_ISPVPMODE_OFFSET))(this);
	}

	::System::Void set_IsPvpMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_ISPVPMODE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TeamTowersLevelGameMode get_LevelGameMode()
	{
		return ((::RPG::GameCore::TeamTowersLevelGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_LEVELGAMEMODE_OFFSET))(this);
	}

	::System::Void set_LevelGameMode(::RPG::GameCore::TeamTowersLevelGameMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersLevelGameMode))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_LEVELGAMEMODE_OFFSET))(this, a1);
	}

	::System::UInt32 get_BrickCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_BRICKCOUNT_OFFSET))(this);
	}

	::System::Void set_BrickCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_BRICKCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_WaveCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_GET_WAVECOUNT_OFFSET))(this);
	}

	::System::Void set_WaveCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_SET_WAVECOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_1_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}
};
