#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { class String; }

#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9876B30)
#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS19_0__STOPTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x9878E70)

inline static constexpr unsigned int Class_1_C7507A7CED329917___c__DisplayClass19_0_TypeDefinitionIndex = 45196;

class Class_1_C7507A7CED329917___c__DisplayClass19_0 : public ::System::Object
{
public:
	::System::String* timelineName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _StopTimeline_b__0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS19_0__STOPTIMELINE_B__0_OFFSET))(this, x);
	}
};
