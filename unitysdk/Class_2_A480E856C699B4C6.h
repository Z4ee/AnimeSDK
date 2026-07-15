#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_7102B70A7EF1DE8E;

#define CLASS_2_A480E856C699B4C6_METHOD_2_B0B18EC9F09D9A52_OFFSET UNITYSDK_OFFSET(0x1563A370)
#define CLASS_2_A480E856C699B4C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1563A3D0)
#define CLASS_2_A480E856C699B4C6__ONBIND_OFFSET UNITYSDK_OFFSET(0x1563A310)

inline static constexpr unsigned int Class_2_A480E856C699B4C6_TypeDefinitionIndex = 68579;

class Class_2_A480E856C699B4C6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_7102B70A7EF1DE8E* Field_2_0; // 0x60

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
