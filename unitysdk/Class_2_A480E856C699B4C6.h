#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_7102B70A7EF1DE8E;

#define CLASS_2_A480E856C699B4C6_METHOD_2_B0B18EC9F09D9A52_OFFSET UNITYSDK_OFFSET(0x17CB1510)
#define CLASS_2_A480E856C699B4C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB1570)
#define CLASS_2_A480E856C699B4C6__ONBIND_OFFSET UNITYSDK_OFFSET(0x17CB14B0)

inline static constexpr unsigned int Class_2_A480E856C699B4C6_TypeDefinitionIndex = 71776;

class Class_2_A480E856C699B4C6 : public ::Class_1_34917908B7833130
{
public:
	::Class_2_7102B70A7EF1DE8E* IAAEBPABFFB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A480E856C699B4C6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A480E856C699B4C6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B0B18EC9F09D9A52(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A480E856C699B4C6_METHOD_2_B0B18EC9F09D9A52_OFFSET))(this, a1);
	}
};
