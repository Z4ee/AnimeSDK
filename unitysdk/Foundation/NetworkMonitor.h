#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

namespace System { template <typename T> class Action_1; }

#define FOUNDATION_NETWORKMONITOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1BEDDD30)
#define FOUNDATION_NETWORKMONITOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BEDDD00)
#define FOUNDATION_NETWORKMONITOR_GET_INTERNETREACHABILITY_OFFSET UNITYSDK_OFFSET(0x1BEDDC30)
#define FOUNDATION_NETWORKMONITOR_GET_REACHABILITY_OFFSET UNITYSDK_OFFSET(0x1BEDDD10)
#define FOUNDATION_NETWORKMONITOR_PAUSE_OFFSET UNITYSDK_OFFSET(0x1BEDE0F0)
#define FOUNDATION_NETWORKMONITOR_SET_REACHABILITY_OFFSET UNITYSDK_OFFSET(0x1BEDDD20)
#define FOUNDATION_NETWORKMONITOR_START_OFFSET UNITYSDK_OFFSET(0x1BEDDF60)
#define FOUNDATION_NETWORKMONITOR_UNPAUSE_OFFSET UNITYSDK_OFFSET(0x1BEDE0A0)
#define FOUNDATION_NETWORKMONITOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BEDE130)
#define FOUNDATION_NETWORKMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDE2D0)

namespace Foundation
{
	inline static constexpr unsigned int NetworkMonitor_TypeDefinitionIndex = 8215;

	class NetworkMonitor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::NetworkMonitor** StaticGet_instance()
		{
			return (::Foundation::NetworkMonitor**)Il2CppClass::FromTypeDefinitionIndex(NetworkMonitor_TypeDefinitionIndex)->GetStaticField(0x6DA0);
		}
		static ::System::Nullable_1<::UnityEngine::NetworkReachability>* StaticGet_DebugReachability()
		{
			return (::System::Nullable_1<::UnityEngine::NetworkReachability>*)Il2CppClass::FromTypeDefinitionIndex(NetworkMonitor_TypeDefinitionIndex)->GetStaticField(0x3690);
		}
		::System::Action_1<::UnityEngine::NetworkReachability>* onReachabilityChanged; // 0x18
		::UnityEngine::NetworkReachability _reachability_k__BackingField; // 0x20
		::System::Single sampleTime; // 0x24
		::System::Single _time; // 0x28
		::System::Boolean _paused; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::NetworkReachability get_InternetReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_GET_INTERNETREACHABILITY_OFFSET))();
		}

		static ::Foundation::NetworkMonitor* get_Instance()
		{
			return ((::Foundation::NetworkMonitor*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_GET_INSTANCE_OFFSET))();
		}

		::UnityEngine::NetworkReachability get_reachability()
		{
			return ((::UnityEngine::NetworkReachability(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_GET_REACHABILITY_OFFSET))(this);
		}

		::System::Void set_reachability(::UnityEngine::NetworkReachability value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NetworkReachability))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_SET_REACHABILITY_OFFSET))(this, value);
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_CREATE_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_START_OFFSET))(this);
		}

		::System::Void UnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_UNPAUSE_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_PAUSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NETWORKMONITOR_UPDATE_OFFSET))(this);
		}
	};
}
