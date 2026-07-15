#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4D1B02017443DB7.h"

class Class_2_3616FDE8A71D0590;
class Class_4_79E380B8FEE3115F;

#define CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18D54BA0)
#define CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D54B90)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_1_TypeDefinitionIndex = 34918;

class Class_2_56255087E4DCEF5F_1 : public ::Class_1_C4D1B02017443DB7
{
public:
	::Class_4_79E380B8FEE3115F* Field_2_0; // 0x18
	::Class_2_3616FDE8A71D0590* Field_2_1; // 0x20

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET))(this);
	}
};
