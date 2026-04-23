#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkEmotionData; }
namespace System { class String; }

#define CLASS_2_619281F89B03B36D___C__DISPLAYCLASS91_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12576E00)
#define CLASS_2_619281F89B03B36D___C__DISPLAYCLASS91_0___GETTALKEMOTIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x125789D0)

inline static constexpr unsigned int Class_2_619281F89B03B36D___c__DisplayClass91_0_TypeDefinitionIndex = 52761;

class Class_2_619281F89B03B36D___c__DisplayClass91_0 : public ::System::Object
{
public:
	::System::String* emotionName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_619281F89B03B36D___C__DISPLAYCLASS91_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTalkEmotionData_b__0(::RPG::Client::TalkEmotionData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TalkEmotionData*))((::PBYTE)hIl2Cpp + CLASS_2_619281F89B03B36D___C__DISPLAYCLASS91_0___GETTALKEMOTIONDATA_B__0_OFFSET))(this, x);
	}
};
