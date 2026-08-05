#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_878;
class Class_2_AA2DF3435829EFF0_26;
class Class_2_AA2DF3435829EFF0_27;

#define CLASS_1_6399F7CE1D7FBB9B_METHOD_1_3C96146C48B37636_OFFSET UNITYSDK_OFFSET(0x1ED30F30)
#define CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED30F20)

inline static constexpr unsigned int Class_1_6399F7CE1D7FBB9B_TypeDefinitionIndex = 92955;

class Class_1_6399F7CE1D7FBB9B : public ::System::Object
{
public:
	::Class_2_AA2DF3435829EFF0_26* Field_1_0; // 0x10
	::Class_2_AA2DF3435829EFF0_27* Field_1_7; // 0x18

	::System::Void _ctor(::Class_2_AA2DF3435829EFF0_26* a1, ::Class_2_AA2DF3435829EFF0_27* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_26*, ::Class_2_AA2DF3435829EFF0_27*))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_878* Method_1_3C96146C48B37636(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_878*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_METHOD_1_3C96146C48B37636_OFFSET))(this, a1, a2);
	}
};
