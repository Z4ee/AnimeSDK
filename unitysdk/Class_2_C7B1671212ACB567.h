#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_669019582704F0BF.h"
#include "unitysdk/Enum_3_5366382EB5312FBF.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_4_8D1AD90A8B2D39F9_3;

#define CLASS_2_C7B1671212ACB567_METHOD_2_35B574BF35040A2E_OFFSET UNITYSDK_OFFSET(0x1E2A5850)
#define CLASS_2_C7B1671212ACB567_METHOD_2_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0x1E2A53A0)
#define CLASS_2_C7B1671212ACB567__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A52C0)

inline static constexpr unsigned int Class_2_C7B1671212ACB567_TypeDefinitionIndex = 92763;

class Class_2_C7B1671212ACB567 : public ::Class_1_669019582704F0BF
{
public:
	// static const ::System::Single Field_2_7; // 0x0
	::Enum_3_5366382EB5312FBF Field_2_1; // 0x30
	::System::Single Field_2_0; // 0x34
	::Struct_2_E614D3B245F96744 Field_2_2; // 0x38

	::System::Void _ctor(::Class_4_8D1AD90A8B2D39F9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*))((::PBYTE)hIl2Cpp + CLASS_2_C7B1671212ACB567__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D51B57322AA430CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7B1671212ACB567_METHOD_2_D51B57322AA430CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_35B574BF35040A2E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7B1671212ACB567_METHOD_2_35B574BF35040A2E_OFFSET))(this);
	}
};
