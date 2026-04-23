#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/NativeTask.h"

namespace MiHoYo::SDK { class BoxModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_GETNATIVETASKFALLBACKKEY_OFFSET UNITYSDK_OFFSET(0x1762BF90)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17620620)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_ISNATIVETASKSWITCHENABLE_OFFSET UNITYSDK_OFFSET(0x1762C2B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_LOADBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1762C330)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_ONSYNCDATATONATIVE_OFFSET UNITYSDK_OFFSET(0x1762C590)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PACKPROTOCOLPARAMSFORNATIVE_OFFSET UNITYSDK_OFFSET(0x1762C650)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_RECORDNATIVEFALLBACKFLAG_OFFSET UNITYSDK_OFFSET(0x1762CD60)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_REMOVENATIVEFALLBACKFLAG_OFFSET UNITYSDK_OFFSET(0x1762CDC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1762BF30)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_SYNCCURENVCONFIGTONATIVE_OFFSET UNITYSDK_OFFSET(0x1762C5A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x17620700)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1762CDF0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1762BE30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_NativeProtocol_TypeDefinitionIndex = 7081;

	class ProtocolManager_NativeProtocol : public ::MiHoYo::SDK::NativeTask
	{
	public:
		static ::MiHoYo::SDK::ProtocolManager_NativeProtocol** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::ProtocolManager_NativeProtocol**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_NativeProtocol_TypeDefinitionIndex)->GetStaticField(0x22190);
		}
		// static const ::System::String* LAUNCH_COMPLIANCE_TASK; // 0x0
		// static const ::System::String* LAUNCHER_PROTOCOL_NATIVE_FALLBACK_KEY; // 0x0
		// static const ::System::String* UPDATE_PROTOCOL_CONFIG_MSG; // 0x0
		// static const ::System::String* IS_ENV_ALREADY_FIELD; // 0x0
		// static const ::System::String* PROTOCOL_VESION_FIELD; // 0x0
		// static const ::System::String* PROTOCOL_ROOT_FIELD; // 0x0
		::MiHoYo::SDK::BoxModel* m_boxConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::ProtocolManager_NativeProtocol* get_Instance()
		{
			return ((::MiHoYo::SDK::ProtocolManager_NativeProtocol*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::ProtocolManager_NativeProtocol* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ProtocolManager_NativeProtocol*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_SET_INSTANCE_OFFSET))(value);
		}

		::System::String* GetNativeTaskFallbackKey(::System::String* strKeyPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_GETNATIVETASKFALLBACKKEY_OFFSET))(this, strKeyPrefix);
		}

		::System::Boolean IsNativeTaskSwitchEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_ISNATIVETASKSWITCHENABLE_OFFSET))(this);
		}

		::System::Void LoadBoxConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_LOADBOXCONFIG_OFFSET))(this);
		}

		::System::Void OnSyncDataToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_ONSYNCDATATONATIVE_OFFSET))(this);
		}

		::System::Void SyncCurEnvConfigToNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_SYNCCURENVCONFIGTONATIVE_OFFSET))(this);
		}

		::System::String* PackProtocolParamsForNative(::System::String* strParams)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PACKPROTOCOLPARAMSFORNATIVE_OFFSET))(this, strParams);
		}

		::System::Void RecordNativeFallbackFlag(::System::String* strKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_RECORDNATIVEFALLBACKFLAG_OFFSET))(this, strKey);
		}

		::System::Void RemoveNativeFallbackFlag(::System::String* strKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_REMOVENATIVEFALLBACKFLAG_OFFSET))(this, strKey);
		}

		::System::Boolean TryShowLauncherProtocolCompliance(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_TRYSHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET))(this, jsonString, callback);
		}
	};
}
