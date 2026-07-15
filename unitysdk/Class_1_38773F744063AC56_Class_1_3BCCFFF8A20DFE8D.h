#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;

#define CLASS_1_38773F744063AC56_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET UNITYSDK_OFFSET(0x190FE280)
#define CLASS_1_38773F744063AC56_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x190FC8A0)

inline static constexpr unsigned int Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D_TypeDefinitionIndex = 35731;

class Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D : public ::System::Object
{
public:
	::Class_2_21AD365C113DC484* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D*))((::PBYTE)hIl2Cpp + CLASS_1_38773F744063AC56_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET))(this, a1);
	}
};
