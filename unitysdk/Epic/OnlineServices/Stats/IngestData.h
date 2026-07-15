#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Stats/IngestDataInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_STATS_INGESTDATA_GET_INGESTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C195C70)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA_GET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C195C50)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_1_OFFSET UNITYSDK_OFFSET(0x1C195EF0)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_INGESTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C195C80)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_OFFSET UNITYSDK_OFFSET(0x1C195C90)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_STATNAME_OFFSET UNITYSDK_OFFSET(0x1C195C60)
#define EPIC_ONLINESERVICES_STATS_INGESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C196010)

namespace Epic::OnlineServices::Stats
{
	inline static constexpr unsigned int IngestData_TypeDefinitionIndex = 42873;

	class IngestData : public ::System::Object
	{
	public:
		::System::String* _StatName_k__BackingField; // 0x10
		::System::Int32 _IngestAmount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_StatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_GET_STATNAME_OFFSET))(this);
		}

		::System::Void set_StatName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_STATNAME_OFFSET))(this, a1);
		}

		::System::Int32 get_IngestAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_GET_INGESTAMOUNT_OFFSET))(this);
		}

		::System::Void set_IngestAmount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_INGESTAMOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Stats::IngestDataInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Stats::IngestDataInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_STATS_INGESTDATA_SET_1_OFFSET))(this, a1);
		}
	};
}
