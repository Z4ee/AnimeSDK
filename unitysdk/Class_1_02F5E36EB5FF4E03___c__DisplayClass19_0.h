#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { class String; }

#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10923DA0)
#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS19_0__STOPTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x10925530)

inline static constexpr unsigned int Class_1_02F5E36EB5FF4E03___c__DisplayClass19_0_TypeDefinitionIndex = 39287;

class Class_1_02F5E36EB5FF4E03___c__DisplayClass19_0 : public ::System::Object
{
public:
	::System::String* timelineName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _StopTimeline_b__0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS19_0__STOPTIMELINE_B__0_OFFSET))(this, x);
	}
};
