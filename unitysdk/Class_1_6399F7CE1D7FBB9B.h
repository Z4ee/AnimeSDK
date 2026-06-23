#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_844;
class Class_2_AA2DF3435829EFF0_18;
class Class_2_AA2DF3435829EFF0_28;

#define CLASS_1_6399F7CE1D7FBB9B_METHOD_1_3C96146C48B37636_OFFSET UNITYSDK_OFFSET(0x1CE250A0)
#define CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE25090)

inline static constexpr unsigned int Class_1_6399F7CE1D7FBB9B_TypeDefinitionIndex = 88995;

class Class_1_6399F7CE1D7FBB9B : public ::System::Object
{
public:
	::Class_2_AA2DF3435829EFF0_28* Field_1_1; // 0x10
	::Class_2_AA2DF3435829EFF0_18* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_AA2DF3435829EFF0_18* a1, ::Class_2_AA2DF3435829EFF0_28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_18*, ::Class_2_AA2DF3435829EFF0_28*))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_844* Method_1_3C96146C48B37636(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_844*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_METHOD_1_3C96146C48B37636_OFFSET))(this, a1, a2);
	}
};
