#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/System/Object.h"

class AkAudioSourceChangeCallbackInfo;
class AkBankCallbackInfo;
class AkCallbackManager_BGMCallback;
class AkCallbackManager_BGMCallbackPackage;
class AkCallbackManager_BankCallbackPackage;
class AkCallbackManager_EventCallbackPackage;
class AkCallbackManager_InitializationSettings;
class AkCallbackManager_MonitoringCallback;
class AkDurationCallbackInfo;
class AkDynamicSequenceItemCallbackInfo;
class AkEventCallbackInfo;
class AkMIDIEventCallbackInfo;
class AkMarkerCallbackInfo;
class AkMonitoringCallbackInfo;
class AkMusicPlaylistCallbackInfo;
class AkMusicSyncCallbackInfo;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1B9582C0)
#define AKCALLBACKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1B958F40)
#define AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B959780)
#define AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B958950)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET UNITYSDK_OFFSET(0x1B958620)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B958330)
#define AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B9596B0)
#define AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1B958CB0)
#define AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B9594E0)
#define AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1B958300)
#define AKCALLBACKMANAGER_TERM_OFFSET UNITYSDK_OFFSET(0x1B9591A0)
#define AKCALLBACKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B95B2A0)

inline static constexpr unsigned int AkCallbackManager_TypeDefinitionIndex = 42019;

class AkCallbackManager : public ::System::Object
{
public:
	static ::AkDynamicSequenceItemCallbackInfo** StaticGet_AkDynamicSequenceItemCallbackInfo()
	{
		return (::AkDynamicSequenceItemCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA50);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>** StaticGet_m_mapEventCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA58);
	}
	static ::AkAudioSourceChangeCallbackInfo** StaticGet_AkAudioSourceChangeCallbackInfo()
	{
		return (::AkAudioSourceChangeCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA60);
	}
	static ::AkMarkerCallbackInfo** StaticGet_AkMarkerCallbackInfo()
	{
		return (::AkMarkerCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA68);
	}
	static ::AkBankCallbackInfo** StaticGet_AkBankCallbackInfo()
	{
		return (::AkBankCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA70);
	}
	static ::AkCallbackManager_EventCallbackPackage** StaticGet_m_LastAddedEventPackage()
	{
		return (::AkCallbackManager_EventCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA78);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>** StaticGet_m_mapBankCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA80);
	}
	static ::AkMIDIEventCallbackInfo** StaticGet_AkMIDIEventCallbackInfo()
	{
		return (::AkMIDIEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA88);
	}
	static ::AkMonitoringCallbackInfo** StaticGet_AkMonitoringCallbackInfo()
	{
		return (::AkMonitoringCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA90);
	}
	static ::AkMusicPlaylistCallbackInfo** StaticGet_AkMusicPlaylistCallbackInfo()
	{
		return (::AkMusicPlaylistCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AA98);
	}
	static ::AkCallbackManager_BGMCallbackPackage** StaticGet_ms_sourceChangeCallbackPkg()
	{
		return (::AkCallbackManager_BGMCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AAA0);
	}
	static ::AkCallbackManager_MonitoringCallback** StaticGet_m_MonitoringCB()
	{
		return (::AkCallbackManager_MonitoringCallback**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AAA8);
	}
	static ::AkMusicSyncCallbackInfo** StaticGet_AkMusicSyncCallbackInfo()
	{
		return (::AkMusicSyncCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AAB0);
	}
	static ::AkEventCallbackInfo** StaticGet_AkEventCallbackInfo()
	{
		return (::AkEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AAB8);
	}
	static ::AkDurationCallbackInfo** StaticGet_AkDurationCallbackInfo()
	{
		return (::AkDurationCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x5AAC0);
	}
	static ::System::Boolean* StaticGet__IsLoggingEnabled_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0xF610);
	}
	static ::System::IntPtr* StaticGet_m_pNotifMem()
	{
		return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0xF618);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_IsLoggingEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET))();
	}

	static ::System::Void set_IsLoggingEnabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET))(a1);
	}

	static ::System::Void RemoveEventCallback(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET))(a1);
	}

	static ::System::Void RemoveEventCallbackCookie(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET))(a1);
	}

	static ::System::Void RemoveBankCallback(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET))(a1);
	}

	static ::System::Void SetLastAddedPlayingID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET))(a1);
	}

	static ::AKRESULT Init(::AkCallbackManager_InitializationSettings* a1)
	{
		return ((::AKRESULT(*)(::AkCallbackManager_InitializationSettings*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INIT_OFFSET))(a1);
	}

	static ::System::Void Term()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_TERM_OFFSET))();
	}

	static ::System::Void SetMonitoringCallback(::AkMonitorErrorLevel a1, ::AkCallbackManager_MonitoringCallback* a2)
	{
		return ((::System::Void(*)(::AkMonitorErrorLevel, ::AkCallbackManager_MonitoringCallback*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET))(a1, a2);
	}

	static ::System::Void SetBGMCallback(::AkCallbackManager_BGMCallback* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::AkCallbackManager_BGMCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET))(a1, a2);
	}

	static ::System::Int32 PostCallbacks()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET))();
	}
};
