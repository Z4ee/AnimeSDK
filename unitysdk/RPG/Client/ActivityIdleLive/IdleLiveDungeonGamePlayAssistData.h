#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_42;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9B45A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B45940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_PROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x9B45B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x9B45B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_PROGRESSLIST_OFFSET UNITYSDK_OFFSET(0x9B45BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x9B45B80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B45A30)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonGamePlayAssistData_TypeDefinitionIndex = 69264;

	class IdleLiveDungeonGamePlayAssistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ProgressList_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData* Create(::Class_1_45BB92167AED63A0_42* info)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*(*)(::Class_1_45BB92167AED63A0_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_OFFSET))(info);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData* Create_1(::System::UInt32 uid, ::System::Collections::Generic::List_1<::System::UInt32>* progressList)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_1_OFFSET))(uid, progressList);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_UID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ProgressList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_PROGRESSLIST_OFFSET))(this);
		}

		::System::Void set_ProgressList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_PROGRESSLIST_OFFSET))(this, value);
		}
	};
}
