#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/Epic/OnlineServices/Sessions/RegisterPlayersCallbackInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF07550)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF07530)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF07510)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF077F0)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF07540)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF07570)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF07520)
#define EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF07910)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int RegisterPlayersCallbackInfo_TypeDefinitionIndex = 45157;

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

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_REGISTERPLAYERSCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
