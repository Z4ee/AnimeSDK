#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0D8C9ED8919282E9_3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F681AD6B57DC77A7_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xBDDEA30)
#define CLASS_1_F681AD6B57DC77A7_GET_BESTROUND_OFFSET UNITYSDK_OFFSET(0xBDDEAF0)
#define CLASS_1_F681AD6B57DC77A7_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBDDEA90)
#define CLASS_1_F681AD6B57DC77A7_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xBDDEA50)
#define CLASS_1_F681AD6B57DC77A7_GET_ID_OFFSET UNITYSDK_OFFSET(0xBDDE9F0)
#define CLASS_1_F681AD6B57DC77A7_GET_MONSTERDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBDDEA70)
#define CLASS_1_F681AD6B57DC77A7_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBDDEAB0)
#define CLASS_1_F681AD6B57DC77A7_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBDDEAD0)
#define CLASS_1_F681AD6B57DC77A7_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBDDEA10)
#define CLASS_1_F681AD6B57DC77A7_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xBDDEA40)
#define CLASS_1_F681AD6B57DC77A7_SET_BESTROUND_OFFSET UNITYSDK_OFFSET(0xBDDEB00)
#define CLASS_1_F681AD6B57DC77A7_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBDDEAA0)
#define CLASS_1_F681AD6B57DC77A7_SET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xBDDEA60)
#define CLASS_1_F681AD6B57DC77A7_SET_ID_OFFSET UNITYSDK_OFFSET(0xBDDEA00)
#define CLASS_1_F681AD6B57DC77A7_SET_MONSTERDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBDDEA80)
#define CLASS_1_F681AD6B57DC77A7_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBDDEAC0)
#define CLASS_1_F681AD6B57DC77A7_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBDDEAE0)
#define CLASS_1_F681AD6B57DC77A7_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBDDEA20)
#define CLASS_1_F681AD6B57DC77A7__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDEB10)

inline static constexpr unsigned int Class_1_F681AD6B57DC77A7_TypeDefinitionIndex = 81018;

class Class_1_F681AD6B57DC77A7 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_0D8C9ED8919282E9_3*>* _Buffs_k__BackingField; // 0x10
	::System::String* _MonsterDecoImagePath_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x20
	::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x30
	::System::UInt32 _BestRound_k__BackingField; // 0x34
	::System::UInt32 _BattleAreaID_k__BackingField; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x3C
	::System::UInt32 _PassedLevel_k__BackingField; // 0x40
	::System::UInt32 _StageID_k__BackingField; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_ID_OFFSET))(this, a1);
	}

	::System::UInt32 get_StageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_STAGEID_OFFSET))(this);
	}

	::System::Void set_StageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_STAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BattleAreaID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_BATTLEAREAID_OFFSET))(this);
	}

	::System::Void set_BattleAreaID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_BATTLEAREAID_OFFSET))(this, a1);
	}

	::System::UInt32 get_DisplayMonsterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_DISPLAYMONSTERID_OFFSET))(this);
	}

	::System::Void set_DisplayMonsterID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_DISPLAYMONSTERID_OFFSET))(this, a1);
	}

	::System::String* get_MonsterDecoImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_MONSTERDECOIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_MonsterDecoImagePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_MONSTERDECOIMAGEPATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_0D8C9ED8919282E9_3*>* get_Buffs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_0D8C9ED8919282E9_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_BUFFS_OFFSET))(this);
	}

	::System::Void set_Buffs(::System::Collections::Generic::IReadOnlyList_1<::Class_1_0D8C9ED8919282E9_3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_0D8C9ED8919282E9_3*>*))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_BUFFS_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_NAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_PassedLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_PASSEDLEVEL_OFFSET))(this);
	}

	::System::Void set_PassedLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_PASSEDLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_BestRound()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_GET_BESTROUND_OFFSET))(this);
	}

	::System::Void set_BestRound(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F681AD6B57DC77A7_SET_BESTROUND_OFFSET))(this, a1);
	}
};
