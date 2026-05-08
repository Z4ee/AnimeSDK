#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/RegisterPlayersCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x198B44F0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x198B44D0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x198B44B0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x198B45A0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x198B44E0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x198B4510)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x198B44C0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x198B4700)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RegisterPlayersCallbackInfo_TypeDefinitionIndex = 33530;

	class RegisterPlayersCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
