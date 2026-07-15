#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;

#define CLASS_3_83FD4418E6E9E045_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1844BD80)
#define CLASS_3_83FD4418E6E9E045__CTOR_OFFSET UNITYSDK_OFFSET(0x1844BCD0)

inline static constexpr unsigned int Class_3_83FD4418E6E9E045_TypeDefinitionIndex = 72664;

class Class_3_83FD4418E6E9E045 : public ::Class_2_1792A4214A514F27
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_3_0; // 0x30
	::Class_1_D33B7D6901AE39E9* Field_3_1; // 0x38

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_3_83FD4418E6E9E045__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83FD4418E6E9E045_INITIALIZE_OFFSET))(this);
	}
};
