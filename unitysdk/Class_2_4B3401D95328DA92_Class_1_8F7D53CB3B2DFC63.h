#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_2_13ADC9176EE2A97C;
class Class_2_4B3401D95328DA92;
class Class_3_87492AF8E794E45E_15;
namespace System { class Action; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_8F7D53CB3B2DFC63_METHOD_1_C6AE47DFA78A7A53_OFFSET UNITYSDK_OFFSET(0x15599F30)
#define CLASS_2_4B3401D95328DA92_CLASS_1_8F7D53CB3B2DFC63__CTOR_OFFSET UNITYSDK_OFFSET(0x15599F20)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_8F7D53CB3B2DFC63_TypeDefinitionIndex = 68316;

class Class_2_4B3401D95328DA92_Class_1_8F7D53CB3B2DFC63 : public ::System::Object
{
public:
	::Class_2_4B3401D95328DA92* Field_1_0; // 0x10
	::System::Action* Field_1_6; // 0x18
	::Class_2_13ADC9176EE2A97C* Field_1_7; // 0x20
	::System::Action* Field_1_10; // 0x28
	::System::Int32 Field_1_11; // 0x30
	::Enum_3_DFCB42601400F441 Field_1_4; // 0x34
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_8F7D53CB3B2DFC63__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C6AE47DFA78A7A53(::Class_3_87492AF8E794E45E_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_15*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_8F7D53CB3B2DFC63_METHOD_1_C6AE47DFA78A7A53_OFFSET))(this, a1);
	}
};
