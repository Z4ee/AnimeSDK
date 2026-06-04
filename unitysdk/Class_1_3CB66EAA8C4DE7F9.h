#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_49.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_50.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_43;
class Class_1_D17272E82AE804C2_671;
class Class_1_F3CA30716D4FAF92_16;
namespace RPG::Client { class ParkourRank; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3CB66EAA8C4DE7F9_GET_AIINFOS_OFFSET UNITYSDK_OFFSET(0xA74D560)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_BALLID_OFFSET UNITYSDK_OFFSET(0xA74D4C0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0xA74D570)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xA74D5D0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xA74D4E0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xA74D4A0)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELSTTS_OFFSET UNITYSDK_OFFSET(0xA74D540)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_PARKOURRANKS_OFFSET UNITYSDK_OFFSET(0xA74D550)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_RANK_OFFSET UNITYSDK_OFFSET(0xA74D500)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_REASON_OFFSET UNITYSDK_OFFSET(0xA74D520)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xA74D590)
#define CLASS_1_3CB66EAA8C4DE7F9_GET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xA74D5B0)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_0621C6FE5BBF3A21_OFFSET UNITYSDK_OFFSET(0xA74D6E0)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0xA74DA60)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_D0F318F102254C6B_OFFSET UNITYSDK_OFFSET(0xA74D940)
#define CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_FC1FC8435418E416_OFFSET UNITYSDK_OFFSET(0xA74D800)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_BALLID_OFFSET UNITYSDK_OFFSET(0xA74D4D0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_DETAIL_OFFSET UNITYSDK_OFFSET(0xA74D580)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_DISTANCETOFINISH_OFFSET UNITYSDK_OFFSET(0xA74D5E0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0xA74D4F0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xA74D4B0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_RANK_OFFSET UNITYSDK_OFFSET(0xA74D510)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_REASON_OFFSET UNITYSDK_OFFSET(0xA74D530)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_RESTARTCOUNT_OFFSET UNITYSDK_OFFSET(0xA74D5A0)
#define CLASS_1_3CB66EAA8C4DE7F9_SET_TOTALTIME_OFFSET UNITYSDK_OFFSET(0xA74D5C0)
#define CLASS_1_3CB66EAA8C4DE7F9__CTOR_OFFSET UNITYSDK_OFFSET(0xA74D5F0)

inline static constexpr unsigned int Class_1_3CB66EAA8C4DE7F9_TypeDefinitionIndex = 57838;

class Class_1_3CB66EAA8C4DE7F9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _ParkourRanks_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>* _LevelStts_k__BackingField; // 0x18
	::Class_1_F3CA30716D4FAF92_16* _Detail_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_671*>* _AiInfos_k__BackingField; // 0x28
	::System::UInt32 _TotalTime_k__BackingField; // 0x30
	::Enum_3_0A3761FE34514D6C_49 _Reason_k__BackingField; // 0x34
	::System::UInt32 _DistanceToFinish_k__BackingField; // 0x38
	::System::UInt32 _Rank_k__BackingField; // 0x3C
	::System::UInt32 _ElapsedMs_k__BackingField; // 0x40
	::System::UInt32 _BallID_k__BackingField; // 0x44
	::System::UInt32 _LevelID_k__BackingField; // 0x48
	::System::UInt32 _RestartCount_k__BackingField; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Class_1_F3CA30716D4FAF92_16* a5, ::Enum_3_0A3761FE34514D6C_49 a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_F3CA30716D4FAF92_16*, ::Enum_3_0A3761FE34514D6C_49, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 get_LevelID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_LEVELID_OFFSET))(this, a1);
	}

	::System::UInt32 get_BallID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_BALLID_OFFSET))(this);
	}

	::System::Void set_BallID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_BALLID_OFFSET))(this, a1);
	}

	::System::UInt32 get_ElapsedMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_ELAPSEDMS_OFFSET))(this);
	}

	::System::Void set_ElapsedMs(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_ELAPSEDMS_OFFSET))(this, a1);
	}

	::System::UInt32 get_Rank()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_RANK_OFFSET))(this);
	}

	::System::Void set_Rank(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_RANK_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_49 get_Reason()
	{
		return ((::Enum_3_0A3761FE34514D6C_49(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::Enum_3_0A3761FE34514D6C_49 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_49))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_REASON_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>* get_LevelStts()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_LEVELSTTS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* get_ParkourRanks()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_PARKOURRANKS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_671*>* get_AiInfos()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_671*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_AIINFOS_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_16* get_Detail()
	{
		return ((::Class_1_F3CA30716D4FAF92_16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_DETAIL_OFFSET))(this);
	}

	::System::Void set_Detail(::Class_1_F3CA30716D4FAF92_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_16*))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_DETAIL_OFFSET))(this, a1);
	}

	::System::UInt32 get_RestartCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_RESTARTCOUNT_OFFSET))(this);
	}

	::System::Void set_RestartCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_RESTARTCOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalTime()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_TOTALTIME_OFFSET))(this);
	}

	::System::Void set_TotalTime(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_TOTALTIME_OFFSET))(this, a1);
	}

	::System::UInt32 get_DistanceToFinish()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_GET_DISTANCETOFINISH_OFFSET))(this);
	}

	::System::Void set_DistanceToFinish(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_SET_DISTANCETOFINISH_OFFSET))(this, a1);
	}

	::System::Void Method_1_0621C6FE5BBF3A21(::Enum_3_0A3761FE34514D6C_50 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_50, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_0621C6FE5BBF3A21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC1FC8435418E416(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_FC1FC8435418E416_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D0F318F102254C6B(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_D0F318F102254C6B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3CB66EAA8C4DE7F9_METHOD_1_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}
};
