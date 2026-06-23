#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Source/LoopSetting.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace RichTap::Common { class RichtapClip; }
namespace System { class String; }

#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1DE1A820)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1DE1A800)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x1DE1A860)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1DE1A830)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x1DE1A840)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETLOOPINTERVAL_OFFSET UNITYSDK_OFFSET(0x1DE1A850)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1DE1A810)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETUID_OFFSET UNITYSDK_OFFSET(0x1DE1A7C0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1DE1A9C0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_SENDLOOPPARAM_OFFSET UNITYSDK_OFFSET(0x1DE1ACB0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_STOP_OFFSET UNITYSDK_OFFSET(0x1DE1AC00)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1A3A0)
#define RICHTAP_SOURCE_RICHTAPCLIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1AE80)

namespace RichTap::Source
{
	inline static constexpr unsigned int RichtapClipEffect_TypeDefinitionIndex = 38088;

	class RichtapClipEffect : public ::System::Object
	{
	public:
		::System::Guid uid; // 0x10
		::System::Int32 frequency; // 0x20
		::System::Int32 amplitude; // 0x24
		::System::Int32 priority; // 0x28
		::RichTap::Source::LoopSetting loop; // 0x2C
		::RichTap::Common::RichtapClip* clip; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_TOSTRING_OFFSET))(this);
		}

		::System::String* GetUid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETUID_OFFSET))(this);
		}

		::RichTap::Common::RichtapClip* GetClip()
		{
			return ((::RichTap::Common::RichtapClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETCLIP_OFFSET))(this);
		}

		::System::Int32 GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETPRIORITY_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetLoopCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETLOOPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLoopInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETLOOPINTERVAL_OFFSET))(this);
		}

		::System::String* GetContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_GETCONTENT_OFFSET))(this);
		}

		::System::Void Play(::System::Int32 startOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_PLAY_OFFSET))(this, startOffset);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_STOP_OFFSET))(this);
		}

		::System::Void SendLoopParam(::System::Int32 amplitude, ::System::Int32 interval, ::System::Int32 frequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_RICHTAPCLIPEFFECT_SENDLOOPPARAM_OFFSET))(this, amplitude, interval, frequency);
		}
	};
}
