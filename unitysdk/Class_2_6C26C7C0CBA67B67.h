#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_6C26C7C0CBA67B67_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C27CE00)
#define CLASS_2_6C26C7C0CBA67B67_METHOD_2_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x1C27CEA0)
#define CLASS_2_6C26C7C0CBA67B67_METHOD_2_DE26AB0208F8E365_OFFSET UNITYSDK_OFFSET(0x1C27CFE0)
#define CLASS_2_6C26C7C0CBA67B67_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1C27CAC0)
#define CLASS_2_6C26C7C0CBA67B67__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27CDF0)

inline static constexpr unsigned int Class_2_6C26C7C0CBA67B67_TypeDefinitionIndex = 87708;

class Class_2_6C26C7C0CBA67B67 : public ::Class_1_EA257C4B28E4CC0D
{
public:
	::Struct_2_E614D3B245F96744_1 Field_2_0; // 0x40
	::System::Single Field_2_6; // 0x48
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x4C
	::System::Single Field_2_5; // 0x54
	::System::Single Field_2_3; // 0x58
	::Struct_2_E614D3B245F96744_1 Field_2_2; // 0x5C
	::System::Boolean Field_2_4; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C26C7C0CBA67B67__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C26C7C0CBA67B67_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C26C7C0CBA67B67_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C26C7C0CBA67B67_METHOD_2_D240830C442C70A4_OFFSET))(this);
	}

	::System::Void Method_2_DE26AB0208F8E365(::Struct_2_E614D3B245F96744_1 a1, ::Struct_2_E614D3B245F96744_1 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E614D3B245F96744_1, ::Struct_2_E614D3B245F96744_1, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C26C7C0CBA67B67_METHOD_2_DE26AB0208F8E365_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
