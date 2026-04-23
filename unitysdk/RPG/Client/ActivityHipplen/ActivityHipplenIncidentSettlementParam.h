#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x9AECE10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9AECE00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0x9AECE20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM_GET_ISSUCC_OFFSET UNITYSDK_OFFSET(0x9AECE30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9AECCB0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentSettlementParam_TypeDefinitionIndex = 69601;

	class ActivityHipplenIncidentSettlementParam : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::UInt32 _DialogID_k__BackingField; // 0x18
		::System::Boolean _IsRandom_k__BackingField; // 0x1C
		::System::Boolean _IsSucc_k__BackingField; // 0x1D

		::System::Void _ctor(::System::String* imagePath, ::System::UInt32 dialogID, ::System::Boolean isRandom, ::System::Boolean isSucc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSETTLEMENTPARAM__CTOR_OFFSET))(this, imagePath, dialogID, isRandom, isSucc);
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
