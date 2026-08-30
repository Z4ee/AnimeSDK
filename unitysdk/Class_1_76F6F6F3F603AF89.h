#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B9909B1F733C939;
class Class_1_7ADF327B3942072B;
class Class_1_FFE5B8A52EC38E9C_2;
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76F6F6F3F603AF89_GET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB75E6D0)
#define CLASS_1_76F6F6F3F603AF89_GET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB75E5F0)
#define CLASS_1_76F6F6F3F603AF89_GET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB75E670)
#define CLASS_1_76F6F6F3F603AF89_GET_FUNS_OFFSET UNITYSDK_OFFSET(0xB75E700)
#define CLASS_1_76F6F6F3F603AF89_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB75E6B0)
#define CLASS_1_76F6F6F3F603AF89_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB75E690)
#define CLASS_1_76F6F6F3F603AF89_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB75E650)
#define CLASS_1_76F6F6F3F603AF89_GET_LEVELRECORDS_OFFSET UNITYSDK_OFFSET(0xB75E6F0)
#define CLASS_1_76F6F6F3F603AF89_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB75E630)
#define CLASS_1_76F6F6F3F603AF89_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xB75E610)
#define CLASS_1_76F6F6F3F603AF89_METHOD_1_2899F90221CA674A_OFFSET UNITYSDK_OFFSET(0xB75E900)
#define CLASS_1_76F6F6F3F603AF89_METHOD_1_C463AB7F9B999652_OFFSET UNITYSDK_OFFSET(0xB75E710)
#define CLASS_1_76F6F6F3F603AF89_SET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB75E6E0)
#define CLASS_1_76F6F6F3F603AF89_SET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB75E600)
#define CLASS_1_76F6F6F3F603AF89_SET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB75E680)
#define CLASS_1_76F6F6F3F603AF89_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB75E6C0)
#define CLASS_1_76F6F6F3F603AF89_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB75E6A0)
#define CLASS_1_76F6F6F3F603AF89_SET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB75E660)
#define CLASS_1_76F6F6F3F603AF89_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB75E640)
#define CLASS_1_76F6F6F3F603AF89_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xB75E620)
#define CLASS_1_76F6F6F3F603AF89__CTOR_OFFSET UNITYSDK_OFFSET(0xB75ECB0)

inline static constexpr unsigned int Class_1_76F6F6F3F603AF89_TypeDefinitionIndex = 63913;

class Class_1_76F6F6F3F603AF89 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* _LevelRecords_k__BackingField; // 0x10
	::RPG::Client::ExpeditionBattleTeam* _Team_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* _Funs_k__BackingField; // 0x20
	::System::UInt32 _PassedLevel_k__BackingField; // 0x28
	::System::UInt32 _BattleRoundCnt_k__BackingField; // 0x2C
	::System::UInt64 _BuffValue_k__BackingField; // 0x30
	::System::UInt32 _LastLevelPercent_k__BackingField; // 0x38
	::System::UInt32 _BelongRouteID_k__BackingField; // 0x3C
	::System::Boolean _IsEmpty_k__BackingField; // 0x40
	::System::Boolean _IsNewRecord_k__BackingField; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BelongRouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_BELONGROUTEID_OFFSET))(this);
	}

	::System::Void set_BelongRouteID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_BELONGROUTEID_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleTeam* get_Team()
	{
		return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_TEAM_OFFSET))(this);
	}

	::System::Void set_Team(::RPG::Client::ExpeditionBattleTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_TEAM_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassedLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_PASSEDLEVEL_OFFSET))(this);
	}

	::System::Void set_PassedLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_PASSEDLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastLevelPercent()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_LASTLEVELPERCENT_OFFSET))(this);
	}

	::System::Void set_LastLevelPercent(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_LASTLEVELPERCENT_OFFSET))(this, a1);
	}

	::System::UInt64 get_BuffValue()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_BUFFVALUE_OFFSET))(this);
	}

	::System::Void set_BuffValue(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_BUFFVALUE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNewRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_ISNEWRECORD_OFFSET))(this);
	}

	::System::Void set_IsNewRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_ISNEWRECORD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEmpty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_ISEMPTY_OFFSET))(this);
	}

	::System::Void set_IsEmpty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_ISEMPTY_OFFSET))(this, a1);
	}

	::System::UInt32 get_BattleRoundCnt()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_BATTLEROUNDCNT_OFFSET))(this);
	}

	::System::Void set_BattleRoundCnt(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_SET_BATTLEROUNDCNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* get_LevelRecords()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_LEVELRECORDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* get_Funs()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_GET_FUNS_OFFSET))(this);
	}

	::System::Void Method_1_C463AB7F9B999652(::Class_1_FFE5B8A52EC38E9C_2* a1, ::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>* a2, ::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_2*, ::System::Collections::Generic::List_1<::Class_1_0B9909B1F733C939*>*, ::System::Collections::Generic::List_1<::Class_1_7ADF327B3942072B*>*))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_METHOD_1_C463AB7F9B999652_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_76F6F6F3F603AF89* Method_1_2899F90221CA674A()
	{
		return ((::Class_1_76F6F6F3F603AF89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76F6F6F3F603AF89_METHOD_1_2899F90221CA674A_OFFSET))(this);
	}
};
