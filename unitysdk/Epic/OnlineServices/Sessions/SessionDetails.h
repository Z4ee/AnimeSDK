#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsAttribute; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsCopyInfoOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsCopySessionAttributeByIndexOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsCopySessionAttributeByKeyOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsGetSessionAttributeCountOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetailsInfo; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYINFO_OFFSET UNITYSDK_OFFSET(0x1D2790F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D279390)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_OFFSET UNITYSDK_OFFSET(0x1D279590)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_GETSESSIONATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1D279810)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D279A30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2790E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2790D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetails_TypeDefinitionIndex = 35765;

	class SessionDetails : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 SessiondetailsAttributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsCopyinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsCopysessionattributebyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsCopysessionattributebykeyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsGetsessionattributecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsInfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessiondetailsSettingsApiLatest = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyInfo(::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions* options, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*& outSessionInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions*, ::Epic::OnlineServices::Sessions::SessionDetailsInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYINFO_OFFSET))(this, options, outSessionInfo);
		}

		::Epic::OnlineServices::Result CopySessionAttributeByIndex(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions* options, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*& outSessionAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions*, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYINDEX_OFFSET))(this, options, outSessionAttribute);
		}

		::Epic::OnlineServices::Result CopySessionAttributeByKey(::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions* options, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*& outSessionAttribute)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions*, ::Epic::OnlineServices::Sessions::SessionDetailsAttribute*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_COPYSESSIONATTRIBUTEBYKEY_OFFSET))(this, options, outSessionAttribute);
		}

		::System::UInt32 GetSessionAttributeCount(::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_GETSESSIONATTRIBUTECOUNT_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILS_RELEASE_OFFSET))(this);
		}
	};
}
