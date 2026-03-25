#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5CA20)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoData_TypeDefinitionIndex = 39517;

	class EmoData : public ::System::Object
	{
	public:
		::System::String* Clip; // 0x10
		::System::Single LeftWeight; // 0x18
		::System::Single RightWeight; // 0x1C
		::System::Single TotalWeight; // 0x20
		::RPGTools::Timeline::Emotion::EmoTrackType EmoType; // 0x24
		::Il2CppArray<::System::String*>* Clips; // 0x28
		::Il2CppArray<::System::String*>* DisplayClips; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODATA__CTOR_OFFSET))(this);
		}
	};
}
