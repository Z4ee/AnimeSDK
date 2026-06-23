#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x1C547790)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x1C5477A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5477B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsCopySessionAttributeByKeyOptions_TypeDefinitionIndex = 35113;

	class SessionDetailsCopySessionAttributeByKeyOptions : public ::System::Object
	{
	public:
		::System::String* _AttrKey_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_AttrKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET))(this);
		}

		::System::Void set_AttrKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSCOPYSESSIONATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET))(this, value);
		}
	};
}
