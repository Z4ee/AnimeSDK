#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_2_14ECE84EB49F7D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x181636E0)

inline static constexpr unsigned int Class_2_14ECE84EB49F7D9B_TypeDefinitionIndex = 35893;

class Class_2_14ECE84EB49F7D9B : public ::Entitas::Systems
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_2_0; // 0x30
	::Class_2_3616FDE8A71D0590_1* Field_2_1; // 0x38

	::System::Void _ctor(::Class_2_3616FDE8A71D0590_1* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3616FDE8A71D0590_1*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_14ECE84EB49F7D9B__CTOR_OFFSET))(this, a1, a2);
	}
};
