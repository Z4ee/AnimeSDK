#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_843;
class Class_2_AA2DF3435829EFF0_17;
class Class_2_AA2DF3435829EFF0_36;

#define CLASS_1_6399F7CE1D7FBB9B_1_METHOD_1_3C96146C48B37636_OFFSET UNITYSDK_OFFSET(0x1DF83EA0)
#define CLASS_1_6399F7CE1D7FBB9B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF83E90)

inline static constexpr unsigned int Class_1_6399F7CE1D7FBB9B_1_TypeDefinitionIndex = 89196;

class Class_1_6399F7CE1D7FBB9B_1 : public ::System::Object
{
public:
	::Class_2_AA2DF3435829EFF0_17* Field_1_0; // 0x10
	::Class_2_AA2DF3435829EFF0_36* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_AA2DF3435829EFF0_17* a1, ::Class_2_AA2DF3435829EFF0_36* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA2DF3435829EFF0_17*, ::Class_2_AA2DF3435829EFF0_36*))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_843* Method_1_3C96146C48B37636(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::Class_0_16E4307DCC419505_843*(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_1_METHOD_1_3C96146C48B37636_OFFSET))(this, a1, a2);
	}
};
