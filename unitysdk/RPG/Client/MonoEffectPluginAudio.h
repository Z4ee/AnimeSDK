#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectAudioEmitterType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_76B6F99F2CFEC790;
namespace RPG::Client { class EffectAudioItem; }
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4230)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A42C0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A44A0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4120)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4410)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0A4060)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xC0A4190)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xC0A4620)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xC0A4570)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC0A45C0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEIN_OFFSET UNITYSDK_OFFSET(0xC0A46C0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0xC0A47C0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_REPLAY_OFFSET UNITYSDK_OFFSET(0xC0A4450)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A40A0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TICK_OFFSET UNITYSDK_OFFSET(0xC0A43A0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0xC0A44E0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A48C0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4930)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4970)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4A50)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A4A10)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0A48F0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0A49B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAudio_TypeDefinitionIndex = 65480;

	class MonoEffectPluginAudio : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::EffectAudioItem*>* EnterPatternName; // 0x28
		::Il2CppArray<::System::String*>* ExitPatternName; // 0x30
		::RPG::Client::MonoEffectAudioEmitterType emitterType; // 0x38
		::System::Boolean StopEnterEventOnDisable; // 0x3C
		::System::Boolean SetTargetShoeType; // 0x3D
		::System::String* TargetShoeType; // 0x40
		::System::String* FadeInAudioEffectName; // 0x48
		::System::String* FadeOutAudioEffectName; // 0x50
		::System::Boolean AutoMuteOnInvisible; // 0x58
		::Class_2_76B6F99F2CFEC790* Field_6_9; // 0x60
		::System::Boolean Field_6_10; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TICK_OFFSET))(this, a1);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_REPLAY_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Void Method_6_737220D2233A9067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_737220D2233A9067_OFFSET))(this);
		}

		::System::Void Method_6_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_6_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_6_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_0CC4BC19C602BCD0_OFFSET))(this);
		}

		::System::Void OnFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEIN_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEOUT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}
	};
}
