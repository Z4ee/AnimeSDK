#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_99A67DA7F7AC8FB8.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_270D168B3DF51738_METHOD_1_AA8656BCDBBD4870_1_OFFSET UNITYSDK_OFFSET(0x11425360)
#define CLASS_1_270D168B3DF51738_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x11425310)
#define CLASS_1_270D168B3DF51738__CTOR_OFFSET UNITYSDK_OFFSET(0x11425300)

inline static constexpr unsigned int Class_1_270D168B3DF51738_TypeDefinitionIndex = 74650;

class Class_1_270D168B3DF51738 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::Enum_3_99A67DA7F7AC8FB8 Field_1_1; // 0x14
	::Enum_3_99A67DA7F7AC8FB8 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_270D168B3DF51738__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_99A67DA7F7AC8FB8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_99A67DA7F7AC8FB8))((::PBYTE)hIl2Cpp + CLASS_1_270D168B3DF51738_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA8656BCDBBD4870_1(::Enum_3_99A67DA7F7AC8FB8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_99A67DA7F7AC8FB8))((::PBYTE)hIl2Cpp + CLASS_1_270D168B3DF51738_METHOD_1_AA8656BCDBBD4870_1_OFFSET))(this, a1);
	}
};
