#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_669019582704F0BF.h"
#include "unitysdk/Enum_3_5366382EB5312FBF.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

class Class_4_8D1AD90A8B2D39F9_2;

#define CLASS_2_418ACB76056B4117_METHOD_2_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0x1C466B60)
#define CLASS_2_418ACB76056B4117_METHOD_2_EBE01B84C1D38AD1_OFFSET UNITYSDK_OFFSET(0x1C4666A0)
#define CLASS_2_418ACB76056B4117__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4665C0)

inline static constexpr unsigned int Class_2_418ACB76056B4117_TypeDefinitionIndex = 88939;

class Class_2_418ACB76056B4117 : public ::Class_1_669019582704F0BF
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	::Struct_2_E614D3B245F96744_1 Field_2_0; // 0x30
	::System::Single Field_2_2; // 0x38
	::Enum_3_5366382EB5312FBF Field_2_1; // 0x3C

	::System::Void _ctor(::Class_4_8D1AD90A8B2D39F9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_2*))((::PBYTE)hIl2Cpp + CLASS_2_418ACB76056B4117__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBE01B84C1D38AD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_418ACB76056B4117_METHOD_2_EBE01B84C1D38AD1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_20139550C8206D50()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_418ACB76056B4117_METHOD_2_20139550C8206D50_OFFSET))(this);
	}
};
