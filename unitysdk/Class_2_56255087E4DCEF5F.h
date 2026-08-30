#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AE3120AFB43466F.h"

class Class_2_3616FDE8A71D0590;
class Class_4_79E380B8FEE3115F;

#define CLASS_2_56255087E4DCEF5F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C27BF30)
#define CLASS_2_56255087E4DCEF5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27BF20)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_TypeDefinitionIndex = 35819;

class Class_2_56255087E4DCEF5F : public ::Class_1_5AE3120AFB43466F
{
public:
	::Class_4_79E380B8FEE3115F* CCPHCIBGFJB; // 0x18
	::Class_2_3616FDE8A71D0590* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_INITIALIZE_OFFSET))(this);
	}
};
