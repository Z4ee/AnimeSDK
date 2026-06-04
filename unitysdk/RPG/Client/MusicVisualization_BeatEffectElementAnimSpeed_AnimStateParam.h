#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTANIMSPEED_ANIMSTATEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC236920)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementAnimSpeed_AnimStateParam_TypeDefinitionIndex = 66225;

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
