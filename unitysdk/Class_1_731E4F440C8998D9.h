#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
class Class_1_A065722566F1B205;

#define CLASS_1_731E4F440C8998D9_METHOD_1_E0FD9E63CC6C2146_OFFSET UNITYSDK_OFFSET(0xA55CA60)
#define CLASS_1_731E4F440C8998D9_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0xA55C9D0)
#define CLASS_1_731E4F440C8998D9__CTOR_OFFSET UNITYSDK_OFFSET(0xA55C980)

inline static constexpr unsigned int Class_1_731E4F440C8998D9_TypeDefinitionIndex = 57853;

class Class_1_731E4F440C8998D9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_375* Field_1_2; // 0x10
	::Class_1_A065722566F1B205* Field_1_1; // 0x18
	::Struct_2_BC950E36747FB4C9 Field_1_0; // 0x20

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_A065722566F1B205* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_A065722566F1B205*))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E0FD9E63CC6C2146(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9_METHOD_1_E0FD9E63CC6C2146_OFFSET))(this, a1);
	}
};
