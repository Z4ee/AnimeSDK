#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleDataBase.h"

class Class_1_E14A0A1A8B1F847C_5;
class Class_1_FA4F4A67B1C04320_759;
class Class_1_FA4F4A67B1C04320_761;
class Class_1_FA4F4A67B1C04320_95;
class Class_3_8B110DB69802966A;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA3B8DF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETEXPGAPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xA3B9C90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA3B9BB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GETTOTALEXPOFLEVEL_OFFSET UNITYSDK_OFFSET(0xA3B9C00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXPUNCLAIMED_OFFSET UNITYSDK_OFFSET(0xA3B9ED0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_EXP_OFFSET UNITYSDK_OFFSET(0xA3B9EB0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3B9E90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SETHYPERPARAMLEVELINFO_OFFSET UNITYSDK_OFFSET(0xA3B9AE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXPUNCLAIMED_OFFSET UNITYSDK_OFFSET(0xA3B9EE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_EXP_OFFSET UNITYSDK_OFFSET(0xA3B9EC0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3B9EA0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCBATTLEINFO_OFFSET UNITYSDK_OFFSET(0xA3B9640)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCEXPCURVE_OFFSET UNITYSDK_OFFSET(0xA3B9010)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCLEVELCHANGE_OFFSET UNITYSDK_OFFSET(0xA3B95E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCUNCLAIMEDEXP_OFFSET UNITYSDK_OFFSET(0xA3B96A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3B8F90)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CHECKEXPCURVEVALID_OFFSET UNITYSDK_OFFSET(0xA3B9700)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B8D50)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__RESET_OFFSET UNITYSDK_OFFSET(0xA3B8F30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__SETLEVELANDEXP_OFFSET UNITYSDK_OFFSET(0xA3B9430)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameStyleData_TypeDefinitionIndex = 55254;

	class RogueTournPersonaGameStyleData : public ::RPG::Client::RogueTournPersonaStyleDataBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ExpCurve; // 0x80
		::System::UInt32 _TotalMaxExp; // 0x88
		::System::UInt32 _TotalMaxLevel; // 0x8C
		::System::UInt32 _Exp_k__BackingField; // 0x90
		::System::UInt32 _ExpUnclaimed_k__BackingField; // 0x94
		::System::UInt32 _Level_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleData* Create(::System::UInt32 styleID)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_CREATE_OFFSET))(styleID);
		}

		::System::Void Sync(::Class_1_E14A0A1A8B1F847C_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void SyncLevelChange(::Class_1_FA4F4A67B1C04320_759* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_759*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCLEVELCHANGE_OFFSET))(this, proto);
		}

		::System::Void SyncBattleInfo(::Class_3_8B110DB69802966A* subMode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8B110DB69802966A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCBATTLEINFO_OFFSET))(this, subMode);
		}

		::System::Void SyncUnclaimedExp(::Class_1_FA4F4A67B1C04320_761* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_761*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCUNCLAIMEDEXP_OFFSET))(this, proto);
		}

		::System::Void SyncExpCurve(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>* levelExpMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA_SYNCEXPCURVE_OFFSET))(this, levelExpMap);
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

		::System::Boolean _CheckExpCurveValid(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>* levelExpMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_95*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEDATA__CHECKEXPCURVEVALID_OFFSET))(this, levelExpMap);
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
