#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA5A66737A25D1F_1;

#define CLASS_1_87B53ED36092C2B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18616C30)
#define CLASS_1_87B53ED36092C2B7_METHOD_1_1319417D31D88430_OFFSET UNITYSDK_OFFSET(0x18616D10)
#define CLASS_1_87B53ED36092C2B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18616CD0)

inline static constexpr unsigned int Class_1_87B53ED36092C2B7_TypeDefinitionIndex = 59058;

class Class_1_87B53ED36092C2B7 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1EA5A66737A25D1F_1*>* Field_1_7; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B53ED36092C2B7__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B53ED36092C2B7_DISPOSE_OFFSET))(this);
	}

	::Class_1_1EA5A66737A25D1F_1* Method_1_1319417D31D88430()
	{
		return ((::Class_1_1EA5A66737A25D1F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87B53ED36092C2B7_METHOD_1_1319417D31D88430_OFFSET))(this);
	}
};
