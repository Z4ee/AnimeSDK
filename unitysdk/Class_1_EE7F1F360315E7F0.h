#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA5A66737A25D1F;

#define CLASS_1_EE7F1F360315E7F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11CEC950)
#define CLASS_1_EE7F1F360315E7F0_METHOD_1_1319417D31D88430_OFFSET UNITYSDK_OFFSET(0x11CECA30)
#define CLASS_1_EE7F1F360315E7F0__CTOR_OFFSET UNITYSDK_OFFSET(0x11CEC9F0)

inline static constexpr unsigned int Class_1_EE7F1F360315E7F0_TypeDefinitionIndex = 79632;

class Class_1_EE7F1F360315E7F0 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_1EA5A66737A25D1F*>* Field_1_2; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7F1F360315E7F0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7F1F360315E7F0_DISPOSE_OFFSET))(this);
	}

	::Class_1_1EA5A66737A25D1F* Method_1_1319417D31D88430()
	{
		return ((::Class_1_1EA5A66737A25D1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE7F1F360315E7F0_METHOD_1_1319417D31D88430_OFFSET))(this);
	}
};
