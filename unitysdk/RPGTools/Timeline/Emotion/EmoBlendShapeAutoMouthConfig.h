#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x1B57B100)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_07EB81D91557654A_OFFSET UNITYSDK_OFFSET(0x1B57B7F0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_701B232B239695EF_OFFSET UNITYSDK_OFFSET(0x1B57B9A0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_C0F35A31FAC15CA9_OFFSET UNITYSDK_OFFSET(0x1B57B160)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_D450AEAD37089609_OFFSET UNITYSDK_OFFSET(0x1B57B9F0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57B7E0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeAutoMouthConfig_TypeDefinitionIndex = 49187;

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

		static ::System::String* Method_1_701B232B239695EF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_701B232B239695EF_OFFSET))(a1);
		}

		static ::System::String* Method_1_07EB81D91557654A(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_07EB81D91557654A_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_1_C0F35A31FAC15CA9(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_C0F35A31FAC15CA9_OFFSET))(a1);
		}

		static ::System::String* Method_1_D450AEAD37089609(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEAUTOMOUTHCONFIG_METHOD_1_D450AEAD37089609_OFFSET))(a1, a2, a3);
		}
	};
}
