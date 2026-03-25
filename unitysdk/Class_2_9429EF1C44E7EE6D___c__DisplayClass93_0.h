#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkEmotionData; }
namespace System { class String; }

#define CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119183B0)
#define CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS93_0___GETTALKEMOTIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x11919F70)

inline static constexpr unsigned int Class_2_9429EF1C44E7EE6D___c__DisplayClass93_0_TypeDefinitionIndex = 46096;

class Class_2_9429EF1C44E7EE6D___c__DisplayClass93_0 : public ::System::Object
{
public:
	::System::String* emotionName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTalkEmotionData_b__0(::RPG::Client::TalkEmotionData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkEmotionData*))((::PBYTE)hIl2Cpp + CLASS_2_9429EF1C44E7EE6D___C__DISPLAYCLASS93_0___GETTALKEMOTIONDATA_B__0_OFFSET))(this, x);
	}
};
