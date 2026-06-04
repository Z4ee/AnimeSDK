#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76B5A587CD7853C2.h"

class Class_2_3616FDE8A71D0590_1;
class Class_4_D581BED103406713;

#define CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18B675D0)
#define CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B675C0)

inline static constexpr unsigned int Class_2_56255087E4DCEF5F_1_TypeDefinitionIndex = 34576;

class Class_2_56255087E4DCEF5F_1 : public ::Class_1_76B5A587CD7853C2
{
public:
	::Class_4_D581BED103406713* Field_2_0; // 0x18
	::Class_2_3616FDE8A71D0590_1* Field_2_1; // 0x20

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56255087E4DCEF5F_1_INITIALIZE_OFFSET))(this);
	}
};
