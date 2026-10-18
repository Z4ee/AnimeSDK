#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B9909B1F733C939;
class Class_1_7ADF327B3942072B;
class Class_1_FFE5B8A52EC38E9C_3;
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE8A1C72010227C5_GET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB607DC0)
#define CLASS_1_BE8A1C72010227C5_GET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB607CE0)
#define CLASS_1_BE8A1C72010227C5_GET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB607D60)
#define CLASS_1_BE8A1C72010227C5_GET_FUNS_OFFSET UNITYSDK_OFFSET(0xB607DF0)
#define CLASS_1_BE8A1C72010227C5_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB607DA0)
#define CLASS_1_BE8A1C72010227C5_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB607D80)
#define CLASS_1_BE8A1C72010227C5_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB607D40)
#define CLASS_1_BE8A1C72010227C5_GET_LEVELRECORDS_OFFSET UNITYSDK_OFFSET(0xB607DE0)
#define CLASS_1_BE8A1C72010227C5_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB607D20)
#define CLASS_1_BE8A1C72010227C5_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xB607D00)
#define CLASS_1_BE8A1C72010227C5_METHOD_1_2899F90221CA674A_OFFSET UNITYSDK_OFFSET(0xB607FF0)
#define CLASS_1_BE8A1C72010227C5_METHOD_1_6F3524E8536296D9_OFFSET UNITYSDK_OFFSET(0xB607E00)
#define CLASS_1_BE8A1C72010227C5_SET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB607DD0)
#define CLASS_1_BE8A1C72010227C5_SET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB607CF0)
#define CLASS_1_BE8A1C72010227C5_SET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB607D70)
#define CLASS_1_BE8A1C72010227C5_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB607DB0)
#define CLASS_1_BE8A1C72010227C5_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB607D90)
#define CLASS_1_BE8A1C72010227C5_SET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB607D50)
#define CLASS_1_BE8A1C72010227C5_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB607D30)
#define CLASS_1_BE8A1C72010227C5_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xB607D10)
#define CLASS_1_BE8A1C72010227C5__CTOR_OFFSET UNITYSDK_OFFSET(0xB6083A0)

inline static constexpr unsigned int Class_1_BE8A1C72010227C5_TypeDefinitionIndex = 63851;

class Class_1_BE8A1C72010227C5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* _Funs_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* _LevelRecords_k__BackingField; // 0x18
	::RPG::Client::ExpeditionBattleTeam* _Team_k__BackingField; // 0x20
	::System::UInt64 _BuffValue_k__BackingField; // 0x28
	::System::UInt32 _PassedLevel_k__BackingField; // 0x30
	::System::UInt32 _BelongRouteID_k__BackingField; // 0x34
	::System::Boolean _IsEmpty_k__BackingField; // 0x38
	::System::Boolean _IsNewRecord_k__BackingField; // 0x39
	::System::UInt32 _LastLevelPercent_k__BackingField; // 0x3C
	::System::UInt32 _BattleRoundCnt_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BelongRouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_BELONGROUTEID_OFFSET))(this);
	}

	::System::Void set_BelongRouteID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_BELONGROUTEID_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleTeam* get_Team()
	{
		return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_TEAM_OFFSET))(this);
	}

	::System::Void set_Team(::RPG::Client::ExpeditionBattleTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_TEAM_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassedLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_PASSEDLEVEL_OFFSET))(this);
	}

	::System::Void set_PassedLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_PASSEDLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastLevelPercent()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_LASTLEVELPERCENT_OFFSET))(this);
	}

	::System::Void set_LastLevelPercent(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_LASTLEVELPERCENT_OFFSET))(this, a1);
	}

	::System::UInt64 get_BuffValue()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_BUFFVALUE_OFFSET))(this);
	}

	::System::Void set_BuffValue(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_BUFFVALUE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNewRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_ISNEWRECORD_OFFSET))(this);
	}

	::System::Void set_IsNewRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_ISNEWRECORD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_ISEMPTY_OFFSET))(this);
	}

	::System::Void set_IsEmpty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_ISEMPTY_OFFSET))(this, a1);
	}

	::System::UInt32 get_BattleRoundCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_BATTLEROUNDCNT_OFFSET))(this);
	}

	::System::Void set_BattleRoundCnt(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_SET_BATTLEROUNDCNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* get_LevelRecords()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_LEVELRECORDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* get_Funs()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_GET_FUNS_OFFSET))(this);
	}

	::System::Void Method_1_6F3524E8536296D9(::Class_1_FFE5B8A52EC38E9C_3* a1, ::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* a2, ::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_3*, ::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>*, ::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_METHOD_1_6F3524E8536296D9_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_BE8A1C72010227C5* Method_1_2899F90221CA674A()
	{
		return ((::Class_1_BE8A1C72010227C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE8A1C72010227C5_METHOD_1_2899F90221CA674A_OFFSET))(this);
	}
};
