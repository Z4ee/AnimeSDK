#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ABA989E5AECB261;

#define CLASS_1_26F7C7575715A789_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17CB98A0)
#define CLASS_1_26F7C7575715A789_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB8530)

inline static constexpr unsigned int Class_1_26F7C7575715A789_Class_1_3BCCFFF8A20DFE8D_TypeDefinitionIndex = 34666;

class Class_1_26F7C7575715A789_Class_1_3BCCFFF8A20DFE8D : public ::System::Object
{
public:
	::Class_2_3ABA989E5AECB261* Field_1_4; // 0x10
	::System::UInt32 Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789_CLASS_1_3BCCFFF8A20DFE8D__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_26F7C7575715A789_Class_1_3BCCFFF8A20DFE8D* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_26F7C7575715A789_Class_1_3BCCFFF8A20DFE8D*))((::PBYTE)hIl2Cpp + CLASS_1_26F7C7575715A789_CLASS_1_3BCCFFF8A20DFE8D_COMPARETO_OFFSET))(this, a1);
	}
};
