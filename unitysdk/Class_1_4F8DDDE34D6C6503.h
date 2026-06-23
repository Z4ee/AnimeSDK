#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4F8DDDE34D6C6503_METHOD_1_226CF12CE6EDDF8C_OFFSET UNITYSDK_OFFSET(0x137C3850)
#define CLASS_1_4F8DDDE34D6C6503_METHOD_1_6752877056149D8E_OFFSET UNITYSDK_OFFSET(0x137C36B0)
#define CLASS_1_4F8DDDE34D6C6503__CTOR_OFFSET UNITYSDK_OFFSET(0x137C36A0)

inline static constexpr unsigned int Class_1_4F8DDDE34D6C6503_TypeDefinitionIndex = 42080;

class Class_1_4F8DDDE34D6C6503 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8DDDE34D6C6503__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_6752877056149D8E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F8DDDE34D6C6503_METHOD_1_6752877056149D8E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_226CF12CE6EDDF8C(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4F8DDDE34D6C6503_METHOD_1_226CF12CE6EDDF8C_OFFSET))(this, a1, a2, a3);
	}
};
