#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FF4A47C8C8E70DB7_METHOD_2_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0xDC76AB0)
#define CLASS_2_FF4A47C8C8E70DB7_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0xDC76CA0)
#define CLASS_2_FF4A47C8C8E70DB7__CTOR_OFFSET UNITYSDK_OFFSET(0xDC76BB0)

inline static constexpr unsigned int Class_2_FF4A47C8C8E70DB7_TypeDefinitionIndex = 82211;

class Class_2_FF4A47C8C8E70DB7 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_7; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF4A47C8C8E70DB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF4A47C8C8E70DB7_METHOD_2_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF4A47C8C8E70DB7_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
