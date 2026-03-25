#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x97B7B70)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0x97B7CE0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_PRIMARYURL_OFFSET UNITYSDK_OFFSET(0x97B7C80)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_SDKENV_OFFSET UNITYSDK_OFFSET(0x97B7BE0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_URLS_OFFSET UNITYSDK_OFFSET(0x97B7C60)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETDISPATCHURLS_OFFSET UNITYSDK_OFFSET(0x97B7A80)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETLATENCY_OFFSET UNITYSDK_OFFSET(0x97B7B20)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x97B7BD0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_LATENCY_OFFSET UNITYSDK_OFFSET(0x97B7CF0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_SDKENV_OFFSET UNITYSDK_OFFSET(0x97B7BF0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_URLS_OFFSET UNITYSDK_OFFSET(0x97B7C70)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x97B7D00)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalDispatchData_ServerData_TypeDefinitionIndex = 56710;

	class GlobalDispatchData_ServerData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _Urls_k__BackingField; // 0x10
		::System::String* _DisplayName; // 0x18
		::System::String* Title; // 0x20
		::System::String* _SdkEnv; // 0x28
		::System::String* Name; // 0x30
		::System::Int64 _Latency; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetDispatchUrls(::Il2CppArray<::System::String*>* urls)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETDISPATCHURLS_OFFSET))(this, urls);
		}

		::System::Void SetLatency(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETLATENCY_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_DisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_DISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_SdkEnv()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_SDKENV_OFFSET))(this);
		}

		::System::Void set_SdkEnv(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_SDKENV_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_Urls()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_URLS_OFFSET))(this);
		}

		::System::Void set_Urls(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_URLS_OFFSET))(this, value);
		}

		::System::String* get_PrimaryUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_PRIMARYURL_OFFSET))(this);
		}

		::System::Int64 get_Latency()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_LATENCY_OFFSET))(this);
		}

		::System::Void set_Latency(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_LATENCY_OFFSET))(this, value);
		}
	};
}
