#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_65AA2967EDFC1C6A_METHOD_2_1994B5139086F4ED_OFFSET UNITYSDK_OFFSET(0x99CE410)
#define CLASS_2_65AA2967EDFC1C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x99CE4F0)

inline static constexpr unsigned int Class_2_65AA2967EDFC1C6A_TypeDefinitionIndex = 39269;

class Class_2_65AA2967EDFC1C6A : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::System::String*>* Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Double Field_2_3; // 0x20
	::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions Field_2_0; // 0x28
	::System::Boolean Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65AA2967EDFC1C6A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_1994B5139086F4ED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65AA2967EDFC1C6A_METHOD_2_1994B5139086F4ED_OFFSET))(this);
	}
};
