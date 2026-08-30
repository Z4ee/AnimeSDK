#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3437ECE1CCDFA38D.h"
#include "unitysdk/System/Object.h"

class Class_2_465A9E6CC2B0EF21;

#define CLASS_1_4908C13F4F161F87_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x1C116120)
#define CLASS_1_4908C13F4F161F87_METHOD_1_94504E402E8F5193_OFFSET UNITYSDK_OFFSET(0x1C116320)
#define CLASS_1_4908C13F4F161F87__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116450)

inline static constexpr unsigned int Class_1_4908C13F4F161F87_TypeDefinitionIndex = 36463;

class Class_1_4908C13F4F161F87 : public ::System::Object
{
public:
	::System::Single KDMHBDFCNMG; // 0x10
	::System::Single GLNJBPOLMCN; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4908C13F4F161F87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4908C13F4F161F87_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_94504E402E8F5193(::Class_2_465A9E6CC2B0EF21* a1, ::Struct_2_3437ECE1CCDFA38D a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*, ::Struct_2_3437ECE1CCDFA38D))((::PBYTE)hIl2Cpp + CLASS_1_4908C13F4F161F87_METHOD_1_94504E402E8F5193_OFFSET))(this, a1, a2);
	}
};
