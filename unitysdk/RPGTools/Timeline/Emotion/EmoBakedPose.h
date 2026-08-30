#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57A930)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBakedPose_TypeDefinitionIndex = 49200;

	class EmoBakedPose : public ::System::Object
	{
	public:
		::System::Double Time; // 0x10
		::System::String* Clip; // 0x18
		::System::Single Weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBAKEDPOSE__CTOR_OFFSET))(this);
		}
	};
}
