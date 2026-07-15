#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A52AD9B5F892205.h"

class Class_2_3616FDE8A71D0590;
class Class_4_79E380B8FEE3115F;

#define CLASS_2_56255087E4DCEF5F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14A6B5B0)
#define CLASS_2_56255087E4DCEF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x14A6B5A0)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_TypeDefinitionIndex = 34975;

class Class_2_56255087E4DCEF5F : public ::Class_1_7A52AD9B5F892205
{
public:
	::Class_2_3616FDE8A71D0590* Field_2_0; // 0x18
	::Class_4_79E380B8FEE3115F* Field_2_1; // 0x20

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_INITIALIZE_OFFSET))(this);
	}
};
