#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590_2;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_6399F7CE1D7FBB9B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AF77C0)
#define CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF77B0)

inline static constexpr unsigned int Class_1_6399F7CE1D7FBB9B_TypeDefinitionIndex = 35114;

class Class_1_6399F7CE1D7FBB9B : public ::System::Object
{
public:
	::Class_2_3616FDE8A71D0590_2* Field_1_0; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_3616FDE8A71D0590_2* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3616FDE8A71D0590_2*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6399F7CE1D7FBB9B_EXECUTE_OFFSET))(this);
	}
};
