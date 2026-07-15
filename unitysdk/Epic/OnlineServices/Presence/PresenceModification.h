#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationDeleteDataOptions; }
namespace Epic::OnlineServices::Presence { class PresenceModificationSetDataOptions; }
namespace Epic::OnlineServices::Presence { class PresenceModificationSetJoinInfoOptions; }
namespace Epic::OnlineServices::Presence { class PresenceModificationSetRawRichTextOptions; }
namespace Epic::OnlineServices::Presence { class PresenceModificationSetStatusOptions; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_DELETEDATA_OFFSET UNITYSDK_OFFSET(0x1C007520)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C007720)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETDATA_OFFSET UNITYSDK_OFFSET(0x1C0077A0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETJOININFO_OFFSET UNITYSDK_OFFSET(0x1C0079A0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETRAWRICHTEXT_OFFSET UNITYSDK_OFFSET(0x1C007BA0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C007DA0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C007510)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C007500)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModification_TypeDefinitionIndex = 43267;

	class PresenceModification : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 PresencemodificationDatarecordidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PresencemodificationDeletedataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PresencemodificationJoininfoMaxLength = 0xFF; // 0x0
		// static const ::System::Int32 PresencemodificationSetdataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PresencemodificationSetjoininfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PresencemodificationSetrawrichtextApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PresencemodificationSetstatusApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result DeleteData(::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_DELETEDATA_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result SetData(::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetJoinInfo(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETJOININFO_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetRawRichText(::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETRAWRICHTEXT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetStatus(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATION_SETSTATUS_OFFSET))(this, a1);
		}
	};
}
