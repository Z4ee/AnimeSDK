#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class IdleLiveSubNodeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C055D64A15D9D59C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x177C3200)
#define CLASS_1_C055D64A15D9D59C_GET_RECOMMENDCRYSTALNUM_OFFSET UNITYSDK_OFFSET(0x177C3230)
#define CLASS_1_C055D64A15D9D59C_GET_RECOMMENDDUNGEONFLOOR_OFFSET UNITYSDK_OFFSET(0x177C3240)
#define CLASS_1_C055D64A15D9D59C_GET_STAGEBATTLEPOWER_OFFSET UNITYSDK_OFFSET(0x177C3220)
#define CLASS_1_C055D64A15D9D59C_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x177C31F0)
#define CLASS_1_C055D64A15D9D59C_METHOD_1_4342727D216B51AC_OFFSET UNITYSDK_OFFSET(0x177C34B0)
#define CLASS_1_C055D64A15D9D59C_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x177C3470)
#define CLASS_1_C055D64A15D9D59C_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x177C3250)
#define CLASS_1_C055D64A15D9D59C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x177C3210)
#define CLASS_1_C055D64A15D9D59C__CTOR_OFFSET UNITYSDK_OFFSET(0x177C33E0)

inline static constexpr unsigned int Class_1_C055D64A15D9D59C_TypeDefinitionIndex = 74857;

class Class_1_C055D64A15D9D59C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* OCDPGEFHLEL; // 0x10
	::System::UInt32 GDCIAPGBAHN; // 0x18
	::System::UInt16 _RecommendDungeonFloor_k__BackingField; // 0x1C
	::System::UInt32 _Index_k__BackingField; // 0x20
	::System::UInt32 LCPFLGOINEN; // 0x24
	::System::UInt64 _RecommendCrystalNum_k__BackingField; // 0x28
	::System::UInt64 _StageBattlePower_k__BackingField; // 0x30
	::System::UInt32 _StageId_k__BackingField; // 0x38

	::System::Void _ctor(::RPG::GameCore::IdleLiveSubNodeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSubNodeRow*))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_StageId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_GET_STAGEID_OFFSET))(this);
	}

	::System::UInt32 get_Index()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_SET_INDEX_OFFSET))(this, a1);
	}

	::System::UInt64 get_StageBattlePower()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_GET_STAGEBATTLEPOWER_OFFSET))(this);
	}

	::System::UInt64 get_RecommendCrystalNum()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_GET_RECOMMENDCRYSTALNUM_OFFSET))(this);
	}

	::System::UInt16 get_RecommendDungeonFloor()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_GET_RECOMMENDDUNGEONFLOOR_OFFSET))(this);
	}

	static ::Class_1_C055D64A15D9D59C* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_C055D64A15D9D59C*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_METHOD_1_CA99028638214CFF_OFFSET))(a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Method_1_4342727D216B51AC()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C055D64A15D9D59C_METHOD_1_4342727D216B51AC_OFFSET))(this);
	}
};
