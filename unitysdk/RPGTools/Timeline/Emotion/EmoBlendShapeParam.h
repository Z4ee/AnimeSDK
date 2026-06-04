#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD0119B0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeParam_TypeDefinitionIndex = 46005;

	class EmoBlendShapeParam : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* MonoController; // 0x10
		::System::String* name; // 0x18
		::System::Single value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEPARAM__CTOR_OFFSET))(this);
		}
	};
}
