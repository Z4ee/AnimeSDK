#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/ExpeditionBattleReportSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_76F6F6F3F603AF89;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A2890DC722DF51C5_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x16109950)
#define CLASS_1_A2890DC722DF51C5_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x16109910)
#define CLASS_1_A2890DC722DF51C5_GET_ROUTERECORDMAP_OFFSET UNITYSDK_OFFSET(0x16109970)
#define CLASS_1_A2890DC722DF51C5_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x16109930)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_264E9C59ACF6E066_OFFSET UNITYSDK_OFFSET(0x16109980)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16109C10)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_CE6CA2A0CB39B537_OFFSET UNITYSDK_OFFSET(0x16109B80)
#define CLASS_1_A2890DC722DF51C5_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x16109960)
#define CLASS_1_A2890DC722DF51C5_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x16109920)
#define CLASS_1_A2890DC722DF51C5_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x16109940)
#define CLASS_1_A2890DC722DF51C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16109CB0)

inline static constexpr unsigned int Class_1_A2890DC722DF51C5_TypeDefinitionIndex = 63899;

class Class_1_A2890DC722DF51C5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_76F6F6F3F603AF89*>* _RouteRecordMap_k__BackingField; // 0x10
	::RPG::Client::ExpeditionBattleReportSourceType _SourceType_k__BackingField; // 0x18
	::System::Boolean _IsNewRecord_k__BackingField; // 0x1C
	::System::UInt32 _MapID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MapID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_GET_MAPID_OFFSET))(this);
	}

	::System::Void set_MapID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_SET_MAPID_OFFSET))(this, a1);
	}

	::RPG::Client::ExpeditionBattleReportSourceType get_SourceType()
	{
		return ((::RPG::Client::ExpeditionBattleReportSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::RPG::Client::ExpeditionBattleReportSourceType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleReportSourceType))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_SET_SOURCETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNewRecord()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_GET_ISNEWRECORD_OFFSET))(this);
	}

	::System::Void set_IsNewRecord(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_SET_ISNEWRECORD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_76F6F6F3F603AF89*>* get_RouteRecordMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_76F6F6F3F603AF89*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_GET_ROUTERECORDMAP_OFFSET))(this);
	}

	::System::UInt32 Method_1_264E9C59ACF6E066()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_METHOD_1_264E9C59ACF6E066_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleRank Method_1_CE6CA2A0CB39B537()
	{
		return ((::RPG::Client::ExpeditionBattleRank(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_METHOD_1_CE6CA2A0CB39B537_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
