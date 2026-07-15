#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x19BB8510)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x19BB8500)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0x19BB8520)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISSUCC_OFFSET UNITYSDK_OFFSET(0x19BB8530)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB82E0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentSettlementParam_TypeDefinitionIndex = 71936;

	class ActivityHipplenIncidentSettlementParam : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::Boolean _IsRandom_k__BackingField; // 0x18
		::System::Boolean _IsSucc_k__BackingField; // 0x19
		::System::UInt32 _DialogID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_DialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_DIALOGID_OFFSET))(this);
		}

		::System::Boolean get_IsRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISRANDOM_OFFSET))(this);
		}

		::System::Boolean get_IsSucc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISSUCC_OFFSET))(this);
		}
	};
}
