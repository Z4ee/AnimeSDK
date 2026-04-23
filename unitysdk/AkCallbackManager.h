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

#define AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1A5D4220)
#define AKCALLBACKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A5D4E00)
#define AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1A5D5640)
#define AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A5D4840)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET UNITYSDK_OFFSET(0x1A5D4550)
#define AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A5D4290)
#define AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A5D5570)
#define AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1A5D4B60)
#define AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A5D53A0)
#define AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1A5D4260)
#define AKCALLBACKMANAGER_TERM_OFFSET UNITYSDK_OFFSET(0x1A5D5060)
#define AKCALLBACKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5D7CA0)

inline static constexpr unsigned int AkCallbackManager_TypeDefinitionIndex = 40377;

class AkCallbackManager : public ::System::Object
{
public:
	static ::AkMarkerCallbackInfo** StaticGet_AkMarkerCallbackInfo()
	{
		return (::AkMarkerCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34EE0);
	}
	static ::AkMusicPlaylistCallbackInfo** StaticGet_AkMusicPlaylistCallbackInfo()
	{
		return (::AkMusicPlaylistCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34EE8);
	}
	static ::AkCallbackManager_EventCallbackPackage** StaticGet_m_LastAddedEventPackage()
	{
		return (::AkCallbackManager_EventCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34EF0);
	}
	static ::AkDynamicSequenceItemCallbackInfo** StaticGet_AkDynamicSequenceItemCallbackInfo()
	{
		return (::AkDynamicSequenceItemCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34EF8);
	}
	static ::AkCallbackManager_MonitoringCallback** StaticGet_m_MonitoringCB()
	{
		return (::AkCallbackManager_MonitoringCallback**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F00);
	}
	static ::AkDurationCallbackInfo** StaticGet_AkDurationCallbackInfo()
	{
		return (::AkDurationCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F08);
	}
	static ::AkMusicSyncCallbackInfo** StaticGet_AkMusicSyncCallbackInfo()
	{
		return (::AkMusicSyncCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>** StaticGet_m_mapEventCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_EventCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F18);
	}
	static ::AkMonitoringCallbackInfo** StaticGet_AkMonitoringCallbackInfo()
	{
		return (::AkMonitoringCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F20);
	}
	static ::AkEventCallbackInfo** StaticGet_AkEventCallbackInfo()
	{
		return (::AkEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F28);
	}
	static ::AkMIDIEventCallbackInfo** StaticGet_AkMIDIEventCallbackInfo()
	{
		return (::AkMIDIEventCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F30);
	}
	static ::AkCallbackManager_BGMCallbackPackage** StaticGet_ms_sourceChangeCallbackPkg()
	{
		return (::AkCallbackManager_BGMCallbackPackage**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F38);
	}
	static ::AkAudioSourceChangeCallbackInfo** StaticGet_AkAudioSourceChangeCallbackInfo()
	{
		return (::AkAudioSourceChangeCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>** StaticGet_m_mapBankCallbacks()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::AkCallbackManager_BankCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F48);
	}
	static ::AkBankCallbackInfo** StaticGet_AkBankCallbackInfo()
	{
		return (::AkBankCallbackInfo**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0x34F50);
	}
	static ::System::IntPtr* StaticGet_m_pNotifMem()
	{
		return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0xD070);
	}
	static ::System::Boolean* StaticGet__IsLoggingEnabled_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_TypeDefinitionIndex)->GetStaticField(0xD078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_IsLoggingEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_GET_ISLOGGINGENABLED_OFFSET))();
	}

	static ::System::Void set_IsLoggingEnabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SET_ISLOGGINGENABLED_OFFSET))(value);
	}

	static ::System::Void RemoveEventCallback(::System::UInt32 in_playingID)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACK_OFFSET))(in_playingID);
	}

	static ::System::Void RemoveEventCallbackCookie(::System::Object* in_cookie)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEEVENTCALLBACKCOOKIE_OFFSET))(in_cookie);
	}

	static ::System::Void RemoveBankCallback(::System::Object* in_cookie)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_REMOVEBANKCALLBACK_OFFSET))(in_cookie);
	}

	static ::System::Void SetLastAddedPlayingID(::System::UInt32 in_playingID)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETLASTADDEDPLAYINGID_OFFSET))(in_playingID);
	}

	static ::AKRESULT Init(::AkCallbackManager_InitializationSettings* settings)
	{
		return ((::AKRESULT(*)(::AkCallbackManager_InitializationSettings*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INIT_OFFSET))(settings);
	}

	static ::System::Void Term()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_TERM_OFFSET))();
	}

	static ::System::Void SetMonitoringCallback(::AkMonitorErrorLevel in_Level, ::AkCallbackManager_MonitoringCallback* in_CB)
	{
		return ((::System::Void(*)(::AkMonitorErrorLevel, ::AkCallbackManager_MonitoringCallback*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETMONITORINGCALLBACK_OFFSET))(in_Level, in_CB);
	}

	static ::System::Void SetBGMCallback(::AkCallbackManager_BGMCallback* in_CB, ::System::Object* in_cookie)
	{
		return ((::System::Void(*)(::AkCallbackManager_BGMCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_SETBGMCALLBACK_OFFSET))(in_CB, in_cookie);
	}

	static ::System::Int32 PostCallbacks()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_POSTCALLBACKS_OFFSET))();
	}
};
