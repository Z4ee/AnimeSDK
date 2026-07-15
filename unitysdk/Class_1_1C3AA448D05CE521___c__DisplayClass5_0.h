#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_1C3AA448D05CE521___C__DISPLAYCLASS5_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET UNITYSDK_OFFSET(0x16378590)
#define CLASS_1_1C3AA448D05CE521___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16377CA0)

inline static constexpr unsigned int Class_1_1C3AA448D05CE521___c__DisplayClass5_0_TypeDefinitionIndex = 53384;

class Class_1_1C3AA448D05CE521___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Text::StringBuilder* stringBuilder; // 0x10
	::System::String* ownerName; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::String* _BuildAnimGroupEventTaskIsClientOnlyErrorLog_b__0(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521___C__DISPLAYCLASS5_0__BUILDANIMGROUPEVENTTASKISCLIENTONLYERRORLOG_B__0_OFFSET))(this, a1);
	}
};
