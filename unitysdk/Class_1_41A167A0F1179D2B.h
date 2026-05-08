#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA5A66737A25D1F;

#define CLASS_1_41A167A0F1179D2B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C0A9B0)
#define CLASS_1_41A167A0F1179D2B_METHOD_1_1319417D31D88430_OFFSET UNITYSDK_OFFSET(0x17C0AA90)
#define CLASS_1_41A167A0F1179D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0AA50)

inline static constexpr unsigned int Class_1_41A167A0F1179D2B_TypeDefinitionIndex = 45829;

class Class_1_41A167A0F1179D2B : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1EA5A66737A25D1F*>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A167A0F1179D2B__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A167A0F1179D2B_DISPOSE_OFFSET))(this);
	}

	::Class_1_1EA5A66737A25D1F* Method_1_1319417D31D88430()
	{
		return ((::Class_1_1EA5A66737A25D1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A167A0F1179D2B_METHOD_1_1319417D31D88430_OFFSET))(this);
	}
};
