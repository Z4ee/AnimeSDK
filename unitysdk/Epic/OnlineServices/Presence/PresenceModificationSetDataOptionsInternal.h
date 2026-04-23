#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace Epic::OnlineServices::Presence { class PresenceModificationSetDataOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x63C10)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x63C00)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x63B70)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_RECORDS_OFFSET UNITYSDK_OFFSET(0x63B00)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetDataOptionsInternal_TypeDefinitionIndex = 41609;

	struct alignas(8) PresenceModificationSetDataOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_RecordsCount; // 0x14
		::System::IntPtr m_Records; // 0x18

		::System::Void set_Records(::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Presence::DataRecord*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_RECORDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETDATAOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
