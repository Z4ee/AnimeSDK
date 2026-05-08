#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6;

#define CLASS_1_D8F67C64F3E7DD33_COMPARE_OFFSET UNITYSDK_OFFSET(0xEA8BF50)
#define CLASS_1_D8F67C64F3E7DD33__CTOR_OFFSET UNITYSDK_OFFSET(0xEA8C2F0)

inline static constexpr unsigned int Class_1_D8F67C64F3E7DD33_TypeDefinitionIndex = 48385;

class Class_1_D8F67C64F3E7DD33 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8F67C64F3E7DD33__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6* a1, ::Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6*, ::Class_1_794BA983EDDBCFDE_Class_1_A407DFD427B7C3A6*))((::PBYTE)hIl2Cpp + CLASS_1_D8F67C64F3E7DD33_COMPARE_OFFSET))(this, a1, a2);
	}
};
