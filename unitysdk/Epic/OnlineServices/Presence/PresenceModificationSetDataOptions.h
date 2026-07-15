#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Presence { class DataRecord; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0x1C008950)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0x1C008960)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C008970)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetDataOptions_TypeDefinitionIndex = 43272;

	class PresenceModificationSetDataOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* _Records_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* get_Records()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS_GET_RECORDS_OFFSET))(this);
		}

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONS_SET_RECORDS_OFFSET))(this, a1);
		}
	};
}
