#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_C9453F3BADD7614F_METHOD_2_D09A7320B998FB2D_OFFSET UNITYSDK_OFFSET(0x174CF520)
#define CLASS_2_C9453F3BADD7614F__CTOR_OFFSET UNITYSDK_OFFSET(0x174CF600)

inline static constexpr unsigned int Class_2_C9453F3BADD7614F_TypeDefinitionIndex = 46665;

class Class_2_C9453F3BADD7614F : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::System::String*>* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20
	::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9453F3BADD7614F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D09A7320B998FB2D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9453F3BADD7614F_METHOD_2_D09A7320B998FB2D_OFFSET))(this);
	}
};
