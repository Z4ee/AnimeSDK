#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/ExpeditionBattleReportSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_BE8A1C72010227C5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A2890DC722DF51C5_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x187D2700)
#define CLASS_1_A2890DC722DF51C5_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x187D26C0)
#define CLASS_1_A2890DC722DF51C5_GET_ROUTERECORDMAP_OFFSET UNITYSDK_OFFSET(0x187D2720)
#define CLASS_1_A2890DC722DF51C5_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x187D26E0)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_264E9C59ACF6E066_OFFSET UNITYSDK_OFFSET(0x187D2730)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x187D29C0)
#define CLASS_1_A2890DC722DF51C5_METHOD_1_CE6CA2A0CB39B537_OFFSET UNITYSDK_OFFSET(0x187D2930)
#define CLASS_1_A2890DC722DF51C5_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x187D2710)
#define CLASS_1_A2890DC722DF51C5_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x187D26D0)
#define CLASS_1_A2890DC722DF51C5_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x187D26F0)
#define CLASS_1_A2890DC722DF51C5__CTOR_OFFSET UNITYSDK_OFFSET(0x187D2A60)

inline static constexpr unsigned int Class_1_A2890DC722DF51C5_TypeDefinitionIndex = 63899;

class Class_1_A2890DC722DF51C5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>* _RouteRecordMap_k__BackingField; // 0x10
	::System::UInt32 _MapID_k__BackingField; // 0x18
	::System::Boolean _IsNewRecord_k__BackingField; // 0x1C
	::RPG::Client::ExpeditionBattleReportSourceType _SourceType_k__BackingField; // 0x20

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

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>* get_RouteRecordMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2890DC722DF51C5_GET_ROUTERECORDMAP_OFFSET))(this);
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
