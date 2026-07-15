#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"

class Class_2_46FD925988407D1E;

#define CLASS_3_C767F2C00176B993_METHOD_3_E03CCAC932CA5251_OFFSET UNITYSDK_OFFSET(0x15E9ADB0)
#define CLASS_3_C767F2C00176B993_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15E9AF50)
#define CLASS_3_C767F2C00176B993_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15E9AE60)
#define CLASS_3_C767F2C00176B993__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9AFD0)

inline static constexpr unsigned int Class_3_C767F2C00176B993_TypeDefinitionIndex = 74208;

class Class_3_C767F2C00176B993 : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::Class_2_46FD925988407D1E* Field_3_0; // 0x20
	::System::UInt64 Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x30
	::System::UInt64 Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993__CTOR_OFFSET))(this);
	}

	static ::Class_3_C767F2C00176B993* Method_3_E03CCAC932CA5251(::Class_2_46FD925988407D1E* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Single a4)
	{
		return ((::Class_3_C767F2C00176B993*(*)(::Class_2_46FD925988407D1E*, ::System::UInt64, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_METHOD_3_E03CCAC932CA5251_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C767F2C00176B993_ONCLEAR_OFFSET))(this);
	}
};
