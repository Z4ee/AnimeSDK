#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_49.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_50.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_43;
class Class_1_D17272E82AE804C2_658;
class Class_1_F3CA30716D4FAF92_18;
namespace RPG::Client { class ParkourRank; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3CB66EAA8C4DE7F9_GET_AIINFOS_OFFSET UNITYSDK_OFFSET(0xEC96A00)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xE670E50)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xEC96A10)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xEC96A70)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xEC96980)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xE670E30)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELSTTS_OFFSET UNITYSDK_OFFSET(0xEC969E0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_PARKOURRANKS_OFFSET UNITYSDK_OFFSET(0xEC969F0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_RANK_OFFSET UNITYSDK_OFFSET(0xEC969A0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_REASON_OFFSET UNITYSDK_OFFSET(0xEC969C0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xEC96A30)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xEC96A50)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_00EDA5A7B8C8CC0A_OFFSET UNITYSDK_OFFSET(0xEC96D00)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_5FC1511FCE339E37_OFFSET UNITYSDK_OFFSET(0xEC96B80)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_931943F16DE23FCC_OFFSET UNITYSDK_OFFSET(0xEC96C30)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0xEC96DC0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_BALLID_OFFSET UNITYSDK_OFFSET(0xE670E60)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0xEC96A20)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xEC96A80)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xEC96990)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xE670E40)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_RANK_OFFSET UNITYSDK_OFFSET(0xEC969B0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_REASON_OFFSET UNITYSDK_OFFSET(0xEC969D0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xEC96A40)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xEC96A60)
#define CLASS_1_3CB66EAA8C4DE7F9__CTOR_OFFSET UNITYSDK_OFFSET(0xEC96A90)

inline static constexpr unsigned int Class_1_3CB66EAA8C4DE7F9_TypeDefinitionIndex = 57051;

class Class_1_3CB66EAA8C4DE7F9 : public ::System::Object
{
public:
	::Class_1_F3CA30716D4FAF92_18* _Detail_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _ParkourRanks_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_658*>* _AiInfos_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>* _LevelStts_k__BackingField; // 0x28
	::System::UInt32 _ElapsedMs_k__BackingField; // 0x30
	::System::UInt32 _BallID_k__BackingField; // 0x34
	::System::UInt32 _Rank_k__BackingField; // 0x38
	::System::UInt32 _TotalTime_k__BackingField; // 0x3C
	::System::UInt32 _DistanceToFinish_k__BackingField; // 0x40
	::System::UInt32 _LevelID_k__BackingField; // 0x44
	::Enum_3_0A3761FE34514D6C_49 _Reason_k__BackingField; // 0x48
	::System::UInt32 _RestartCount_k__BackingField; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Class_1_F3CA30716D4FAF92_18* a5, ::Enum_3_0A3761FE34514D6C_49 a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_F3CA30716D4FAF92_18*, ::Enum_3_0A3761FE34514D6C_49, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 get_LevelID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_LEVELID_OFFSET))(this, value);
	}

	::System::UInt32 get_BallID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_BALLID_OFFSET))(this);
	}

	::System::Void set_BallID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_BALLID_OFFSET))(this, value);
	}

	::System::UInt32 get_ElapsedMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_ELAPSEDMS_OFFSET))(this);
	}

	::System::Void set_ElapsedMs(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_ELAPSEDMS_OFFSET))(this, value);
	}

	::System::UInt32 get_Rank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_RANK_OFFSET))(this, value);
	}

	::Enum_3_0A3761FE34514D6C_49 get_Reason()
	{
		return ((::Enum_3_0A3761FE34514D6C_49(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::Enum_3_0A3761FE34514D6C_49 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_49))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_REASON_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>* get_LevelStts()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELSTTS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* get_ParkourRanks()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_PARKOURRANKS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_658*>* get_AiInfos()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_658*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_AIINFOS_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_18* get_Detail()
	{
		return ((::Class_1_F3CA30716D4FAF92_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_DETAIL_OFFSET))(this);
	}

	::System::Void set_Detail(::Class_1_F3CA30716D4FAF92_18* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_DETAIL_OFFSET))(this, value);
	}

	::System::UInt32 get_RestartCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_RESTARTCOUNT_OFFSET))(this);
	}

	::System::Void set_RestartCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_RESTARTCOUNT_OFFSET))(this, value);
	}

	::System::UInt32 get_TotalTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_TOTALTIME_OFFSET))(this);
	}

	::System::Void set_TotalTime(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_TOTALTIME_OFFSET))(this, value);
	}

	::System::UInt32 get_DistanceToFinish()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_DISTANCETOFINISH_OFFSET))(this);
	}

	::System::Void set_DistanceToFinish(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_DISTANCETOFINISH_OFFSET))(this, value);
	}

	::System::Void Method_1_5FC1511FCE339E37(::Enum_3_0A3761FE34514D6C_50 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_50, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_5FC1511FCE339E37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_931943F16DE23FCC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_931943F16DE23FCC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_00EDA5A7B8C8CC0A(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_00EDA5A7B8C8CC0A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}
};
