#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F356FCA60006484C.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define CLASS_2_9829A06A68BC881E_METHOD_2_8C243290F89060B9_OFFSET UNITYSDK_OFFSET(0x12D8ABD0)
#define CLASS_2_9829A06A68BC881E__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8ACE0)

inline static constexpr unsigned int Class_2_9829A06A68BC881E_TypeDefinitionIndex = 83027;

class Class_2_9829A06A68BC881E : public ::Class_1_F356FCA60006484C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9829A06A68BC881E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_8C243290F89060B9(::System::Single a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_9829A06A68BC881E_METHOD_2_8C243290F89060B9_OFFSET))(this, a1, a2);
	}
};
