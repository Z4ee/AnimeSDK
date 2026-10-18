#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PlaybackTimelineClip_TimelinePlaybackOptions.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }

#define CLASS_2_C9453F3BADD7614F_METHOD_2_D09A7320B998FB2D_OFFSET UNITYSDK_OFFSET(0x164E8FE0)
#define CLASS_2_C9453F3BADD7614F__CTOR_OFFSET UNITYSDK_OFFSET(0x164E90C0)

inline static constexpr unsigned int Class_2_C9453F3BADD7614F_TypeDefinitionIndex = 48456;

class Class_2_C9453F3BADD7614F : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::System::String*>* GNJOBBDLHEI; // 0x10
	::System::String* EHJELGDJLPC; // 0x18
	::System::Double OAPLHPJNELN; // 0x20
	::System::Boolean LFNHCFMGPBP; // 0x28
	::RPGTools::Timeline::PlaybackTimelineClip_TimelinePlaybackOptions ALEGIFEHGLH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9453F3BADD7614F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D09A7320B998FB2D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9453F3BADD7614F_METHOD_2_D09A7320B998FB2D_OFFSET))(this);
	}
};
