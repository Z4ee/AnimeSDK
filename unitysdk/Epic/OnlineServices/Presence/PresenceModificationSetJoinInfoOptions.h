#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS_GET_JOININFO_OFFSET UNITYSDK_OFFSET(0x8F09E70)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS_SET_JOININFO_OFFSET UNITYSDK_OFFSET(0x8F09E80)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8F09E90)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetJoinInfoOptions_TypeDefinitionIndex = 41610;

	class PresenceModificationSetJoinInfoOptions : public ::System::Object
	{
	public:
		::System::String* _JoinInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_JoinInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS_GET_JOININFO_OFFSET))(this);
		}

		::System::Void set_JoinInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETJOININFOOPTIONS_SET_JOININFO_OFFSET))(this, value);
		}
	};
}
