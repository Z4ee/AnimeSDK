#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_12121D6A4A8DB72D.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7BBE1AB23B2EC5E_GET_FINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x19916CC0)
#define CLASS_1_B7BBE1AB23B2EC5E_GET_ISPLAYERNEWRECORD_OFFSET UNITYSDK_OFFSET(0x19916CD0)
#define CLASS_1_B7BBE1AB23B2EC5E_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x19916CA0)
#define CLASS_1_B7BBE1AB23B2EC5E_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0x19916CB0)
#define CLASS_1_B7BBE1AB23B2EC5E_GET_RACERANKING_OFFSET UNITYSDK_OFFSET(0x19916D00)
#define CLASS_1_B7BBE1AB23B2EC5E_GET_RANKFINISHTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x19916CF0)
#define CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_18712A93386CBFCC_OFFSET UNITYSDK_OFFSET(0x199166C0)
#define CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_886E1D6FBD50565D_OFFSET UNITYSDK_OFFSET(0x19916D10)
#define CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_AC6E3745CF7A2A76_OFFSET UNITYSDK_OFFSET(0x199164D0)
#define CLASS_1_B7BBE1AB23B2EC5E_SET_ISPLAYERNEWRECORD_OFFSET UNITYSDK_OFFSET(0x19916CE0)
#define CLASS_1_B7BBE1AB23B2EC5E__CTOR_OFFSET UNITYSDK_OFFSET(0x199160C0)

inline static constexpr unsigned int Class_1_B7BBE1AB23B2EC5E_TypeDefinitionIndex = 80614;

class Class_1_B7BBE1AB23B2EC5E : public ::System::Object
{
public:
	// static const ::System::Single KAJAPKFEADN; // 0x0
	// static const ::System::Single HILJFNAIEMD; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>* _RaceRanking_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::Single>* _RankFinishTimeSeconds_k__BackingField; // 0x18
	::System::Boolean _IsPlayerNewRecord_k__BackingField; // 0x20
	::System::UInt32 _MatchId_k__BackingField; // 0x24
	::System::Single _FinishTimeSeconds_k__BackingField; // 0x28
	::System::Int32 _PlayerRank_k__BackingField; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>* a4, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 get_MatchId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_MATCHID_OFFSET))(this);
	}

	::System::Int32 get_PlayerRank()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_PLAYERRANK_OFFSET))(this);
	}

	::System::Single get_FinishTimeSeconds()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_FINISHTIMESECONDS_OFFSET))(this);
	}

	::System::Boolean get_IsPlayerNewRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_ISPLAYERNEWRECORD_OFFSET))(this);
	}

	::System::Void set_IsPlayerNewRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_SET_ISPLAYERNEWRECORD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_RankFinishTimeSeconds()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_RANKFINISHTIMESECONDS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>* get_RaceRanking()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_GET_RACERANKING_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::Single>* Method_1_AC6E3745CF7A2A76(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_AC6E3745CF7A2A76_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::Single>* Method_1_18712A93386CBFCC(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a5)
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_18712A93386CBFCC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_886E1D6FBD50565D(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7BBE1AB23B2EC5E_METHOD_1_886E1D6FBD50565D_OFFSET))(a1, a2);
	}
};
