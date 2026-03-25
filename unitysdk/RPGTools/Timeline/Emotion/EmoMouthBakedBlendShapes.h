#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
#include "unitysdk/System/Object.h"

#define RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPES__CTOR_OFFSET UNITYSDK_OFFSET(0xAB607F0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoMouthBakedBlendShapes_TypeDefinitionIndex = 39546;

	class EmoMouthBakedBlendShapes : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType type; // 0x10
		::System::Single time; // 0x14
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOMOUTHBAKEDBLENDSHAPES__CTOR_OFFSET))(this);
		}
	};
}
