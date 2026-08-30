#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_10;
class Class_1_FDFA365FE186E8F2_6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B623150238B3CF94_GET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xB825730)
#define CLASS_1_B623150238B3CF94_GET_CARID_OFFSET UNITYSDK_OFFSET(0xB825630)
#define CLASS_1_B623150238B3CF94_GET_CARNUM_OFFSET UNITYSDK_OFFSET(0xB825650)
#define CLASS_1_B623150238B3CF94_GET_DEVELOPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB8256F0)
#define CLASS_1_B623150238B3CF94_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB825670)
#define CLASS_1_B623150238B3CF94_GET_EQUIPPEDPAINTID_OFFSET UNITYSDK_OFFSET(0xB825710)
#define CLASS_1_B623150238B3CF94_GET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB8256D0)
#define CLASS_1_B623150238B3CF94_GET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xB825690)
#define CLASS_1_B623150238B3CF94_GET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xB8256B0)
#define CLASS_1_B623150238B3CF94_METHOD_1_61CD3163D493FB64_OFFSET UNITYSDK_OFFSET(0xB825750)
#define CLASS_1_B623150238B3CF94_METHOD_1_FCD0E2BE6F1FB5FC_OFFSET UNITYSDK_OFFSET(0xB8260E0)
#define CLASS_1_B623150238B3CF94_SET_ACTIVESKILLEXP_OFFSET UNITYSDK_OFFSET(0xB825740)
#define CLASS_1_B623150238B3CF94_SET_CARID_OFFSET UNITYSDK_OFFSET(0xB825640)
#define CLASS_1_B623150238B3CF94_SET_CARNUM_OFFSET UNITYSDK_OFFSET(0xB825660)
#define CLASS_1_B623150238B3CF94_SET_DEVELOPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB825700)
#define CLASS_1_B623150238B3CF94_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0xB825680)
#define CLASS_1_B623150238B3CF94_SET_EQUIPPEDPAINTID_OFFSET UNITYSDK_OFFSET(0xB825720)
#define CLASS_1_B623150238B3CF94_SET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB8256E0)
#define CLASS_1_B623150238B3CF94_SET_STATVALUES_OFFSET UNITYSDK_OFFSET(0xB8256A0)
#define CLASS_1_B623150238B3CF94_SET_TARGETSTATTIERS_OFFSET UNITYSDK_OFFSET(0xB8256C0)
#define CLASS_1_B623150238B3CF94__CTOR_OFFSET UNITYSDK_OFFSET(0xB826180)

inline static constexpr unsigned int Class_1_B623150238B3CF94_TypeDefinitionIndex = 80367;

class Class_1_B623150238B3CF94 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _DevelopedPartIDs_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _TargetStatTiers_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* _StatValues_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _EquippedPartIDs_k__BackingField; // 0x28
	::System::UInt32 _ActiveSkillExp_k__BackingField; // 0x30
	::System::UInt32 _CarNum_k__BackingField; // 0x34
	::System::UInt32 _DriverID_k__BackingField; // 0x38
	::System::UInt32 _EquippedPaintID_k__BackingField; // 0x3C
	::System::UInt32 _CarID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_CARID_OFFSET))(this);
	}

	::System::Void set_CarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_CARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_CarNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_CARNUM_OFFSET))(this);
	}

	::System::Void set_CarNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_CARNUM_OFFSET))(this, a1);
	}

	::System::UInt32 get_DriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_DRIVERID_OFFSET))(this);
	}

	::System::Void set_DriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_DRIVERID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_StatValues()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_STATVALUES_OFFSET))(this);
	}

	::System::Void set_StatValues(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_STATVALUES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* get_TargetStatTiers()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_TARGETSTATTIERS_OFFSET))(this);
	}

	::System::Void set_TargetStatTiers(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingStatType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_TARGETSTATTIERS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EquippedPartIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_EQUIPPEDPARTIDS_OFFSET))(this);
	}

	::System::Void set_EquippedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_EQUIPPEDPARTIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_DevelopedPartIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_DEVELOPEDPARTIDS_OFFSET))(this);
	}

	::System::Void set_DevelopedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_DEVELOPEDPARTIDS_OFFSET))(this, a1);
	}

	::System::UInt32 get_EquippedPaintID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_EQUIPPEDPAINTID_OFFSET))(this);
	}

	::System::Void set_EquippedPaintID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_EQUIPPEDPAINTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_ActiveSkillExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_GET_ACTIVESKILLEXP_OFFSET))(this);
	}

	::System::Void set_ActiveSkillExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_SET_ACTIVESKILLEXP_OFFSET))(this, a1);
	}

	::System::Void Method_1_61CD3163D493FB64(::Class_1_D40936EF3BF54118_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_10*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_METHOD_1_61CD3163D493FB64_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCD0E2BE6F1FB5FC(::Class_1_FDFA365FE186E8F2_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_6*))((::PBYTE)hIl2Cpp + CLASS_1_B623150238B3CF94_METHOD_1_FCD0E2BE6F1FB5FC_OFFSET))(this, a1);
	}
};
