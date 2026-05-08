#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionCopyInfoOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionGetRegisteredPlayerByIndexOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionGetRegisteredPlayerCountOptions; }
namespace Epic::OnlineServices::Sessions { class ActiveSessionInfo; }

#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_COPYINFO_OFFSET UNITYSDK_OFFSET(0x1AD8DBC0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_OFFSET UNITYSDK_OFFSET(0x1AD8DE60)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x1AD8DFC0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AD8E1E0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD8DBB0)
#define EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD8DBA0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int ActiveSession_TypeDefinitionIndex = 33445;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyInfo(::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions* options, ::Epic::OnlineServices::Sessions::ActiveSessionInfo*& outActiveSessionInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions*, ::Epic::OnlineServices::Sessions::ActiveSessionInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_COPYINFO_OFFSET))(this, options, outActiveSessionInfo);
		}

		::Epic::OnlineServices::ProductUserId* GetRegisteredPlayerByIndex(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions* options)
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERBYINDEX_OFFSET))(this, options);
		}

		::System::UInt32 GetRegisteredPlayerCount(::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_GETREGISTEREDPLAYERCOUNT_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ACTIVESESSION_RELEASE_OFFSET))(this);
		}
	};
}
