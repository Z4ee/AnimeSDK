#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_52;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC4BF6F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC4BF5A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_PROGRESSLIST_OFFSET UNITYSDK_OFFSET(0xC4BF800)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xC4BF7E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_PROGRESSLIST_OFFSET UNITYSDK_OFFSET(0xC4BF810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xC4BF7F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4BF690)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonGamePlayAssistData_TypeDefinitionIndex = 75206;

	class IdleLiveDungeonGamePlayAssistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ProgressList_k__BackingField; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData* Create(::Class_1_45BB92167AED63A0_52* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*(*)(::Class_1_45BB92167AED63A0_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData* Create_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_UID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ProgressList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_GET_PROGRESSLIST_OFFSET))(this);
		}

		::System::Void set_ProgressList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYASSISTDATA_SET_PROGRESSLIST_OFFSET))(this, a1);
		}
	};
}
