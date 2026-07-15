#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36CDCA6857E296D1;
class Class_1_56E1726699E41732;
class Class_2_2090B77B5C7838F2;
class Class_3_543326C044264182;

#define CLASS_1_4F01A39E72168325_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15F32BE0)
#define CLASS_1_4F01A39E72168325_METHOD_1_1081E2961B3A8250_OFFSET UNITYSDK_OFFSET(0x15F34AA0)
#define CLASS_1_4F01A39E72168325__CTOR_OFFSET UNITYSDK_OFFSET(0x15F32BD0)

inline static constexpr unsigned int Class_1_4F01A39E72168325_TypeDefinitionIndex = 74007;

class Class_1_4F01A39E72168325 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::Class_3_543326C044264182* Field_1_1; // 0x10
	::Class_2_2090B77B5C7838F2* Field_1_2; // 0x18

	::System::Void _ctor(::Class_2_2090B77B5C7838F2* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2090B77B5C7838F2*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_4F01A39E72168325__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F01A39E72168325_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_1081E2961B3A8250(::Class_1_36CDCA6857E296D1* a1, ::Class_1_56E1726699E41732* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36CDCA6857E296D1*, ::Class_1_56E1726699E41732*))((::PBYTE)hIl2Cpp + CLASS_1_4F01A39E72168325_METHOD_1_1081E2961B3A8250_OFFSET))(this, a1, a2);
	}
};
