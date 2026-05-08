#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C1B1543EF9571C1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_C91109162D964E4D_CLASS_1_3AB622976AB7D02F_METHOD_1_904DE03378530D9E_OFFSET UNITYSDK_OFFSET(0x111CE190)
#define CLASS_3_C91109162D964E4D_CLASS_1_3AB622976AB7D02F__CTOR_OFFSET UNITYSDK_OFFSET(0x111CE180)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Class_1_3AB622976AB7D02F_TypeDefinitionIndex = 47092;

class Class_3_C91109162D964E4D_Class_1_3AB622976AB7D02F : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x10
	::Class_1_0C1B1543EF9571C1* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_3AB622976AB7D02F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_904DE03378530D9E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_3AB622976AB7D02F_METHOD_1_904DE03378530D9E_OFFSET))(this, a1);
	}
};
