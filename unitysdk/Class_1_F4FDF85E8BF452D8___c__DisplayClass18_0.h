#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A46ED100713943F0;
class Class_1_F4FDF85E8BF452D8;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B107260)
#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS18_0___MAKECHOICE_B__1_OFFSET UNITYSDK_OFFSET(0x1B108070)

inline static constexpr unsigned int Class_1_F4FDF85E8BF452D8___c__DisplayClass18_0_TypeDefinitionIndex = 40484;

class Class_1_F4FDF85E8BF452D8___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_F4FDF85E8BF452D8* __4__this; // 0x10
	::System::Comparison_1<::Class_1_A46ED100713943F0*>* __9__1; // 0x18
	::System::Int32 priority; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __MakeChoice_b__1(::Class_1_A46ED100713943F0* a1, ::Class_1_A46ED100713943F0* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A46ED100713943F0*, ::Class_1_A46ED100713943F0*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS18_0___MAKECHOICE_B__1_OFFSET))(this, a1, a2);
	}
};
