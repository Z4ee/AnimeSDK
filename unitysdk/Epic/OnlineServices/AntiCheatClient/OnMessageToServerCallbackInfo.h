#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D37D340)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D37D300)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x1D37D320)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D37D4D0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D37D310)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x1D37D330)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D37D350)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37D6E0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnMessageToServerCallbackInfo_TypeDefinitionIndex = 36978;

	class OnMessageToServerCallbackInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _MessageData_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_MESSAGEDATA_OFFSET))(this);
		}

		::System::Void set_MessageData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_MESSAGEDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
