#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleDataBase.h"

class Class_1_D17272E82AE804C2_102;
class Class_1_D17272E82AE804C2_798;
class Class_1_D17272E82AE804C2_800;
class Class_1_E14A0A1A8B1F847C_11;
class Class_3_8B110DB69802966A;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0EF630)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETEXPGAPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xB0F04D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB0F03F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETTOTALEXPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xB0F0440)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXPUNCLAIMED_OFFSET UNITYSDK_OFFSET(0xB0F0710)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXP_OFFSET UNITYSDK_OFFSET(0xB0F06F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0F06D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SETHYPERPARAMLEVELINFO_OFFSET UNITYSDK_OFFSET(0xB0F0320)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXPUNCLAIMED_OFFSET UNITYSDK_OFFSET(0xB0F0720)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXP_OFFSET UNITYSDK_OFFSET(0xB0F0700)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0F06E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xB0EFE80)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCEXPCURVE_OFFSET UNITYSDK_OFFSET(0xB0EF850)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xB0EFE20)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCUNCLAIMEDEXP_OFFSET UNITYSDK_OFFSET(0xB0EFEE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0EF7D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CHECKEXPCURVEVALID_OFFSET UNITYSDK_OFFSET(0xB0EFF40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0EF590)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__RESET_OFFSET UNITYSDK_OFFSET(0xB0EF770)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__SETLEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xB0EFC70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameStyleData_TypeDefinitionIndex = 62442;

	class RogueTournPersonaGameStyleData : public ::RPG::Client::RogueTournPersonaStyleDataBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ExpCurve; // 0x80
		::System::UInt32 _ExpUnclaimed_k__BackingField; // 0x88
		::System::UInt32 _Exp_k__BackingField; // 0x8C
		::System::UInt32 _TotalMaxLevel; // 0x90
		::System::UInt32 _TotalMaxExp; // 0x94
		::System::UInt32 _Level_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleData* Create(::System::UInt32 styleID)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_CREATE_OFFSET))(styleID);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_11* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncLevelChange(::Class_1_D17272E82AE804C2_798* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_798*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCLEVELCHANGE_OFFSET))(this, proto);
		}

		::System::Void SyncBattleInfo(::Class_3_8B110DB69802966A* subMode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8B110DB69802966A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCBATTLEINFO_OFFSET))(this, subMode);
		}

		::System::Void SyncUnclaimedExp(::Class_1_D17272E82AE804C2_800* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_800*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCUNCLAIMEDEXP_OFFSET))(this, proto);
		}

		::System::Void SyncExpCurve(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>* levelExpMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCEXPCURVE_OFFSET))(this, levelExpMap);
		}

		::System::Void SetHyperParamLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SETHYPERPARAMLEVELINFO_OFFSET))(this);
		}

		::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetTotalExpOfLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETTOTALEXPOFLEVEL_OFFSET))(this, level);
		}

		::System::UInt32 GetExpGapOfLevel(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETEXPGAPOFLEVEL_OFFSET))(this, level);
		}

		::System::Void _Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__RESET_OFFSET))(this);
		}

		::System::Void _SetLevelAndExp(::System::UInt32 level, ::System::UInt32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__SETLEVELANDEXP_OFFSET))(this, level, exp);
		}

		::System::Boolean _CheckExpCurveValid(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>* levelExpMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CHECKEXPCURVEVALID_OFFSET))(this, levelExpMap);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXP_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpUnclaimed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXPUNCLAIMED_OFFSET))(this);
		}

		::System::Void set_ExpUnclaimed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXPUNCLAIMED_OFFSET))(this, value);
		}
	};
}
