#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsCopySessionAttributeByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x919F70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x5120D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x916EA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopySessionAttributeByIndexOptionsInternal_TypeDefinitionIndex = 35112;

	struct alignas(4) SessionDetailsCopySessionAttributeByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_AttrIndex; // 0x14

		::System::Void set_AttrIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_ATTRINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
