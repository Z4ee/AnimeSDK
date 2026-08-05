#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Source/LoopSetting.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RichTap::Common { class RichtapClip; }
namespace System { class String; }

#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1F22C720)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1F22C700)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x1F22C760)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F22C730)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1F22C740)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETLOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x1F22C750)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F22C710)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETUID_OFFSET UNITYSDK_OFFSET(0x1F22C6C0)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x1F22C8C0)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_SENDLOOPPARAM_OFFSET UNITYSDK_OFFSET(0x1F22CBB0)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_STOP_OFFSET UNITYSDK_OFFSET(0x1F22CB00)
#define RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22CD80)

namespace RichTap::Source::Components
{
	inline static constexpr unsigned int RichtapClipEffectComponent_TypeDefinitionIndex = 38753;

	class RichtapClipEffectComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Guid uid; // 0x18
		::System::Int32 frequency; // 0x28
		::System::Int32 amplitude; // 0x2C
		::System::Int32 priority; // 0x30
		::RichTap::Source::LoopSetting loop; // 0x34
		::RichTap::Common::RichtapClip* clip; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::String* GetUid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETUID_OFFSET))(this);
		}

		::RichTap::Common::RichtapClip* GetClip()
		{
			return ((::RichTap::Common::RichtapClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETCLIP_OFFSET))(this);
		}

		::System::Int32 GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETPRIORITY_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETLOOPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLoopInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETLOOPINTERVAL_OFFSET))(this);
		}

		::System::String* GetContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_GETCONTENT_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_PLAY_OFFSET))(this, startOffset);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_STOP_OFFSET))(this);
		}

		::System::Void SendLoopParam(::System::Int32 amplitude, ::System::Int32 interval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_RICHTAPCLIPEFFECTCOMPONENT_SENDLOOPPARAM_OFFSET))(this, amplitude, interval, frequency);
		}
	};
}
