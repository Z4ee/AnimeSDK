#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_669019582704F0BF.h"

class Class_2_A09FCF98BA7C7265;
class Class_4_8D1AD90A8B2D39F9_2;

#define CLASS_2_17A6BB1869EFB43F_METHOD_2_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x1AEA7A20)
#define CLASS_2_17A6BB1869EFB43F_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1AEA7ED0)
#define CLASS_2_17A6BB1869EFB43F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA79E0)

inline static constexpr unsigned int Class_2_17A6BB1869EFB43F_TypeDefinitionIndex = 83426;

class Class_2_17A6BB1869EFB43F : public ::Class_1_669019582704F0BF
{
public:
	::Class_2_A09FCF98BA7C7265* Field_2_0; // 0x30

	::System::Void _ctor(::Class_4_8D1AD90A8B2D39F9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_2*))((::PBYTE)hIl2Cpp + CLASS_2_17A6BB1869EFB43F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1EA3754039AA10DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17A6BB1869EFB43F_METHOD_2_1EA3754039AA10DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17A6BB1869EFB43F_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}
};
