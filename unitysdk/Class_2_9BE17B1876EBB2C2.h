#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_9BE17B1876EBB2C2_METHOD_2_17C4B46E6AC28864_OFFSET UNITYSDK_OFFSET(0x14209180)
#define CLASS_2_9BE17B1876EBB2C2__CTOR_OFFSET UNITYSDK_OFFSET(0x14209260)

inline static constexpr unsigned int Class_2_9BE17B1876EBB2C2_TypeDefinitionIndex = 45726;

class Class_2_9BE17B1876EBB2C2 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::String* Field_2_0; // 0x10
	::Il2CppArray<::System::String*>* Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20
	::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BE17B1876EBB2C2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_17C4B46E6AC28864()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BE17B1876EBB2C2_METHOD_2_17C4B46E6AC28864_OFFSET))(this);
	}
};
