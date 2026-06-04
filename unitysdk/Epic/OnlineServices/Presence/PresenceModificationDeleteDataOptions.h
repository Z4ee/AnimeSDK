#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationDataRecordId; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0xA332920)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0xA332930)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA332940)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationDeleteDataOptions_TypeDefinitionIndex = 42409;

	class PresenceModificationDeleteDataOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*>* _Records_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::PresenceModificationDataRecordId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONDELETEDATAOPTIONS_SET_RECORDS_OFFSET))(this, a1);
		}
	};
}
