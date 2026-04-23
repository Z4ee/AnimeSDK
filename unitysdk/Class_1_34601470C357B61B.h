#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_34601470C357B61B_METHOD_1_65EC73288BE5333B_OFFSET UNITYSDK_OFFSET(0xD389260)
#define CLASS_1_34601470C357B61B__CTOR_OFFSET UNITYSDK_OFFSET(0xD389330)

inline static constexpr unsigned int Class_1_34601470C357B61B_TypeDefinitionIndex = 65313;

class Class_1_34601470C357B61B : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34601470C357B61B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65EC73288BE5333B(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + CLASS_1_34601470C357B61B_METHOD_1_65EC73288BE5333B_OFFSET))(this, a1);
	}
};
