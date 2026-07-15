#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkEmotionData; }
namespace System { class String; }

#define CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D73480)
#define CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS98_0___GETTALKEMOTIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x14D75080)

inline static constexpr unsigned int Class_2_C52C03D5A2B32952___c__DisplayClass98_0_TypeDefinitionIndex = 54683;

class Class_2_C52C03D5A2B32952___c__DisplayClass98_0 : public ::System::Object
{
public:
	::System::String* emotionName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTalkEmotionData_b__0(::RPG::Client::TalkEmotionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkEmotionData*))((::PBYTE)hIl2Cpp + CLASS_2_C52C03D5A2B32952___C__DISPLAYCLASS98_0___GETTALKEMOTIONDATA_B__0_OFFSET))(this, a1);
	}
};
