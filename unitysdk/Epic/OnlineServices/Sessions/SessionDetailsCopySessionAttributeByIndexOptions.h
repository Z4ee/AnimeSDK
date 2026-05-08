#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1A4F3F00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0x1A4F3F10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3F20)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopySessionAttributeByIndexOptions_TypeDefinitionIndex = 33548;

	class SessionDetailsCopySessionAttributeByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _AttrIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AttrIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET))(this);
		}

		::System::Void set_AttrIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET))(this, value);
		}
	};
}
