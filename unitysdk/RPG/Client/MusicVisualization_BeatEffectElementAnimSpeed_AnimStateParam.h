#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_ANIMSTATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAB29DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam_TypeDefinitionIndex = 65298;

	class MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam : public ::System::Object
	{
	public:
		::System::String* AnimStateName; // 0x10
		::System::Single Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_ANIMSTATEPARAM__CTOR_OFFSET))(this);
		}
	};
}
