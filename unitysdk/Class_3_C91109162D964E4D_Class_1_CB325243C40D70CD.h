#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B9E093D23DD9C36;

#define CLASS_3_C91109162D964E4D_CLASS_1_CB325243C40D70CD_COMPARE_OFFSET UNITYSDK_OFFSET(0x1702B9C0)
#define CLASS_3_C91109162D964E4D_CLASS_1_CB325243C40D70CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1702C0B0)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Class_1_CB325243C40D70CD_TypeDefinitionIndex = 59393;

class Class_3_C91109162D964E4D_Class_1_CB325243C40D70CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_CB325243C40D70CD__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_2_3B9E093D23DD9C36* a1, ::Class_2_3B9E093D23DD9C36* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_3B9E093D23DD9C36*, ::Class_2_3B9E093D23DD9C36*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_CB325243C40D70CD_COMPARE_OFFSET))(this, a1, a2);
	}
};
