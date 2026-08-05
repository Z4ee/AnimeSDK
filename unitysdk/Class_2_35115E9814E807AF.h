#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_35115E9814E807AF_METHOD_2_5D5AC54906C8759C_OFFSET UNITYSDK_OFFSET(0x1E070790)
#define CLASS_2_35115E9814E807AF_METHOD_2_B67A7D5A7BB42B14_OFFSET UNITYSDK_OFFSET(0x1E070660)
#define CLASS_2_35115E9814E807AF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E0705C0)
#define CLASS_2_35115E9814E807AF_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x1E070280)
#define CLASS_2_35115E9814E807AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0705B0)

inline static constexpr unsigned int Class_2_35115E9814E807AF_TypeDefinitionIndex = 91835;

class Class_2_35115E9814E807AF : public ::Class_1_EA257C4B28E4CC0D
{
public:
	::System::Single Field_2_4; // 0x40
	::Struct_2_E614D3B245F96744 Field_2_1; // 0x44
	::Struct_2_E614D3B245F96744 Field_2_7; // 0x4C
	::System::Single Field_2_6; // 0x54
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x58
	::System::Boolean Field_2_5; // 0x60
	::System::Single Field_2_11; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35115E9814E807AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35115E9814E807AF_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35115E9814E807AF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_B67A7D5A7BB42B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35115E9814E807AF_METHOD_2_B67A7D5A7BB42B14_OFFSET))(this);
	}

	::System::Void Method_2_5D5AC54906C8759C(::Struct_2_E614D3B245F96744 a1, ::Struct_2_E614D3B245F96744 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E614D3B245F96744, ::Struct_2_E614D3B245F96744, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_35115E9814E807AF_METHOD_2_5D5AC54906C8759C_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
