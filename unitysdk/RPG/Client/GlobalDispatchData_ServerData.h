#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA42FB40)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_LATENCY_OFFSET UNITYSDK_OFFSET(0xA42FCB0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_PRIMARYURL_OFFSET UNITYSDK_OFFSET(0xA42FC50)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_SDKENV_OFFSET UNITYSDK_OFFSET(0xA42FBB0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_GET_URLS_OFFSET UNITYSDK_OFFSET(0xA42FC30)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETDISPATCHURLS_OFFSET UNITYSDK_OFFSET(0xA42FA50)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SETLATENCY_OFFSET UNITYSDK_OFFSET(0xA42FAF0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA42FBA0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_LATENCY_OFFSET UNITYSDK_OFFSET(0xA42FCC0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_SDKENV_OFFSET UNITYSDK_OFFSET(0xA42FBC0)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA_SET_URLS_OFFSET UNITYSDK_OFFSET(0xA42FC40)
#define RPG_CLIENT_GLOBALDISPATCHDATA_SERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA42FCD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalDispatchData_ServerData_TypeDefinitionIndex = 63955;

	class GlobalDispatchData_ServerData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _Urls_k__BackingField; // 0x10
		::System::String* _SdkEnv; // 0x18
		::System::String* _DisplayName; // 0x20
		::System::String* Name; // 0x28
		::System::String* Title; // 0x30
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
