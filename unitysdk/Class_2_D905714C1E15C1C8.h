#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BB4B99DE4C2501EC_9;
namespace RPG::GameCore { class SummonUnitConfig; }
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D905714C1E15C1C8_GET_ATTACHENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x152D5830)
#define CLASS_2_D905714C1E15C1C8_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x152D58B0)
#define CLASS_2_D905714C1E15C1C8_GET_CONFIGDATA_OFFSET UNITYSDK_OFFSET(0x152D5870)
#define CLASS_2_D905714C1E15C1C8_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x152D58F0)
#define CLASS_2_D905714C1E15C1C8_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x152D58D0)
#define CLASS_2_D905714C1E15C1C8_GET_NAME_OFFSET UNITYSDK_OFFSET(0x152D5890)
#define CLASS_2_D905714C1E15C1C8_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0x152D5850)
#define CLASS_2_D905714C1E15C1C8_GET_SUMMONERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x152D5810)
#define CLASS_2_D905714C1E15C1C8_GET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0x152D57F0)
#define CLASS_2_D905714C1E15C1C8_GET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x152D5AD0)
#define CLASS_2_D905714C1E15C1C8_METHOD_2_62B630FB66AD0307_OFFSET UNITYSDK_OFFSET(0x152D5980)
#define CLASS_2_D905714C1E15C1C8_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x152D5910)
#define CLASS_2_D905714C1E15C1C8_SET_ATTACHENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x152D5840)
#define CLASS_2_D905714C1E15C1C8_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0x152D58C0)
#define CLASS_2_D905714C1E15C1C8_SET_CONFIGDATA_OFFSET UNITYSDK_OFFSET(0x152D5880)
#define CLASS_2_D905714C1E15C1C8_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x152D5900)
#define CLASS_2_D905714C1E15C1C8_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x152D58E0)
#define CLASS_2_D905714C1E15C1C8_SET_NAME_OFFSET UNITYSDK_OFFSET(0x152D58A0)
#define CLASS_2_D905714C1E15C1C8_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0x152D5860)
#define CLASS_2_D905714C1E15C1C8_SET_SUMMONERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x152D5820)
#define CLASS_2_D905714C1E15C1C8_SET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0x152D5800)
#define CLASS_2_D905714C1E15C1C8_SET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x152D5AE0)
#define CLASS_2_D905714C1E15C1C8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x152D5CB0)
#define CLASS_2_D905714C1E15C1C8__CTOR_OFFSET UNITYSDK_OFFSET(0x152D5AF0)

inline static constexpr unsigned int Class_2_D905714C1E15C1C8_TypeDefinitionIndex = 59385;

class Class_2_D905714C1E15C1C8 : public ::RPG::Client::MapEntityDef
{
public:
	::RPG::GameCore::SummonUnitDataRow* _RowData_k__BackingField; // 0x58
	::RPG::GameCore::SummonUnitConfig* _ConfigData_k__BackingField; // 0x60
	::System::String* _Name_k__BackingField; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* _TriggerNameList_k__BackingField; // 0x70
	::System::Single _LifeTime_k__BackingField; // 0x78
	::System::UInt32 _SummonUnitID_k__BackingField; // 0x7C
	::RPG::GameCore::CampType _CampID_k__BackingField; // 0x80
	::System::UInt32 _SummonerServerEntityID_k__BackingField; // 0x84
	::System::UInt32 _AttachEntityServerEntityID_k__BackingField; // 0x88
	::System::UInt64 _CreateTimeStamp_k__BackingField; // 0x90

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_BB4B99DE4C2501EC_9* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Vector3 a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_BB4B99DE4C2501EC_9*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 get_SummonUnitID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_SUMMONUNITID_OFFSET))(this);
	}

	::System::Void set_SummonUnitID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_SUMMONUNITID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SummonerServerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_SUMMONERSERVERENTITYID_OFFSET))(this);
	}

	::System::Void set_SummonerServerEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_SUMMONERSERVERENTITYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_AttachEntityServerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_ATTACHENTITYSERVERENTITYID_OFFSET))(this);
	}

	::System::Void set_AttachEntityServerEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_ATTACHENTITYSERVERENTITYID_OFFSET))(this, a1);
	}

	::RPG::GameCore::SummonUnitDataRow* get_RowData()
	{
		return ((::RPG::GameCore::SummonUnitDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_ROWDATA_OFFSET))(this);
	}

	::System::Void set_RowData(::RPG::GameCore::SummonUnitDataRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitDataRow*))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_ROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::SummonUnitConfig* get_ConfigData()
	{
		return ((::RPG::GameCore::SummonUnitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_CONFIGDATA_OFFSET))(this);
	}

	::System::Void set_ConfigData(::RPG::GameCore::SummonUnitConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_CONFIGDATA_OFFSET))(this, a1);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::CampType get_CampID()
	{
		return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_CAMPID_OFFSET))(this);
	}

	::System::Void set_CampID(::RPG::GameCore::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_CAMPID_OFFSET))(this, a1);
	}

	::System::Single get_LifeTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_LIFETIME_OFFSET))(this);
	}

	::System::Void set_LifeTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_LIFETIME_OFFSET))(this, a1);
	}

	::System::UInt64 get_CreateTimeStamp()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_CREATETIMESTAMP_OFFSET))(this);
	}

	::System::Void set_CreateTimeStamp(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_CREATETIMESTAMP_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_TriggerNameList()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_GET_TRIGGERNAMELIST_OFFSET))(this);
	}

	::System::Void set_TriggerNameList(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_SET_TRIGGERNAMELIST_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_TOSTRING_OFFSET))(this);
	}

	static ::System::Single Method_2_62B630FB66AD0307(::System::Single a1, ::System::UInt64 a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_D905714C1E15C1C8_METHOD_2_62B630FB66AD0307_OFFSET))(a1, a2);
	}
};
