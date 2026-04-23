#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FadeOutLerpType.h"
#include "unitysdk/RPG/Client/FadeType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_A709DB359B6FA510;
namespace RPG::Client { class EffectFadeSyncSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINFADE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9915F0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991680)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9917D0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA9919E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_CURRENTDISSOLVEVALUE_OFFSET UNITYSDK_OFFSET(0xA991980)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_NEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0xA991920)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA9915B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0xA9918E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA9918A0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991770)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE_TICK_OFFSET UNITYSDK_OFFSET(0xA991830)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9919F0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA991B30)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA991A60)
#define RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA991B90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFade_TypeDefinitionIndex = 64583;

	class MonoEffectPluginFade : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean EnableCharaEff; // 0x28
		::System::Boolean IsLogicComponent; // 0x29
		::RPG::Client::FadeType EffectFadeInType; // 0x2C
		::System::Single FadeInTime; // 0x30
		::System::Boolean PromiseFadeInTime; // 0x34
		::System::Boolean SkipFadeInOnStart; // 0x35
		::System::String* FadeInEndTrigger; // 0x38
		::System::String* FadeInAnimClipName; // 0x40
		::System::String* FadeInAudioEffectName; // 0x48
		::System::Boolean FadeHoldForever; // 0x50
		::System::Single FadeHoldTime; // 0x54
		::System::String* EnterLoopTrigger; // 0x58
		::System::Single HoldOnDissolveVal; // 0x60
		::System::Boolean StopFollowOnFadeOut; // 0x64
		::RPG::Client::FadeType EffectFadeOutType; // 0x68
		::RPG::Client::FadeOutLerpType FadeOutLerp; // 0x6C
		::System::Single FadeOutTime; // 0x70
		::System::String* FadeOutTrigger; // 0x78
		::System::String* FadeOutAnimClipName; // 0x80
		::System::String* FadeOutAudioEffectName; // 0x88
		::UnityEngine::Animator* FadeAnimator; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AffectedRendererList; // 0x98
		::System::Boolean HideUnAffectedRenders; // 0xA0
		::Il2CppArray<::RPG::Client::EffectFadeSyncSet*>* EffectFadeOut2NormalizedTimeMapping; // 0xA8
		::System::Boolean DebugFadeIn; // 0xB0
		::System::Boolean DebugFadeOut; // 0xB1
		::System::Boolean DebugForceToHold; // 0xB2
		::Class_2_A709DB359B6FA510* _Behavior; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_ONINVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_NeedFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_NEEDFADEOUT_OFFSET))(this);
		}

		::System::Single get_CurrentDissolveValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_CURRENTDISSOLVEVALUE_OFFSET))(this);
		}

		::Class_2_A709DB359B6FA510* get_Behavior()
		{
			return ((::Class_2_A709DB359B6FA510*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFADE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
