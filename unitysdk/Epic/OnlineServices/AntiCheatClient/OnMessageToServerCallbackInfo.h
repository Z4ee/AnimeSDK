#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0C2A30)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0C29F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xA0C2A10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0C2E10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0C2A00)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xA0C2A20)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0C2A40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C2F30)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int OnMessageToServerCallbackInfo_TypeDefinitionIndex = 43340;

	class OnMessageToServerCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Il2CppArray<::System::Byte>* _MessageData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GET_MESSAGEDATA_OFFSET))(this);
		}

		::System::Void set_MessageData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_MESSAGEDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ONMESSAGETOSERVERCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
