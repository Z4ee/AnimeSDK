#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Source/LoopSetting.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RichTap::Common { class RichtapClip; }
namespace System { class String; }

#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1F22EA90)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1F22EA70)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x1F22EAD0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F22EAA0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1F22EAB0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETLOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x1F22EAC0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F22EA80)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETUID_OFFSET UNITYSDK_OFFSET(0x1F22EA30)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_PLAY_OFFSET UNITYSDK_OFFSET(0x1F22EC30)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_SENDLOOPPARAM_OFFSET UNITYSDK_OFFSET(0x1F22EF20)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_STOP_OFFSET UNITYSDK_OFFSET(0x1F22EE70)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F22E610)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22F0F0)

namespace RichTap::Source
{
	inline static constexpr unsigned int RichtapClipEffectSO_TypeDefinitionIndex = 38750;

	class RichtapClipEffectSO : public ::UnityEngine::ScriptableObject
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_TOSTRING_OFFSET))(this);
		}

		::System::String* GetUid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETUID_OFFSET))(this);
		}

		::RichTap::Common::RichtapClip* GetClip()
		{
			return ((::RichTap::Common::RichtapClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETCLIP_OFFSET))(this);
		}

		::System::Int32 GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETPRIORITY_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETLOOPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLoopInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETLOOPINTERVAL_OFFSET))(this);
		}

		::System::String* GetContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_GETCONTENT_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_PLAY_OFFSET))(this, startOffset);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_STOP_OFFSET))(this);
		}

		::System::Void SendLoopParam(::System::Int32 amplitude, ::System::Int32 interval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECTSO_SENDLOOPPARAM_OFFSET))(this, amplitude, interval, frequency);
		}
	};
}
