#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0xB8CDCA0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_17B613590C092C58_OFFSET UNITYSDK_OFFSET(0xB8CE370)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CE360)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeAutoMouthConfig_TypeDefinitionIndex = 45419;

	class EmoBlendShapeAutoMouthConfig : public ::System::Object
	{
	public:
		::System::UInt32 talkSentenceID; // 0x10
		::System::String* dataPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_GET_ASSETPATH_OFFSET))(this);
		}

		static ::System::String* Method_1_17B613590C092C58(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_17B613590C092C58_OFFSET))(a1);
		}
	};
}
