#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionCopyInfoOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionGetRegisteredPlayerByIndexOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionGetRegisteredPlayerCountOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionInfo; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_COPYINFO_OFFSET UNITYSDK_OFFSET(0xA357630)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3578F0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xA357A50)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_RELEASE_OFFSET UNITYSDK_OFFSET(0xA357C90)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA357620)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xA357610)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSession_TypeDefinitionIndex = 42029;

	class ActiveSession : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 ActivesessionCopyinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ActivesessionGetregisteredplayerbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ActivesessionGetregisteredplayercountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ActivesessionInfoApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyInfo(::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions* a1, ::Epic::OnlineServices::Sessions::ActiveSessionInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions*, ::Epic::OnlineServices::Sessions::ActiveSessionInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_COPYINFO_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::ProductUserId* GetRegisteredPlayerByIndex(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions* a1)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetRegisteredPlayerCount(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_RELEASE_OFFSET))(this);
		}
	};
}
