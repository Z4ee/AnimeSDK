#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define CLASS_2_A32A9F4AEB44289D_METHOD_2_493D0D27FEEE2EC0_OFFSET UNITYSDK_OFFSET(0xEA90840)
#define CLASS_2_A32A9F4AEB44289D__CTOR_OFFSET UNITYSDK_OFFSET(0xEA90830)

inline static constexpr unsigned int Class_2_A32A9F4AEB44289D_TypeDefinitionIndex = 60163;

class Class_2_A32A9F4AEB44289D : public ::Class_1_5BD3EF046502B972
{
public:
	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A32A9F4AEB44289D__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::UICameraAtom Method_2_493D0D27FEEE2EC0(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_A32A9F4AEB44289D_METHOD_2_493D0D27FEEE2EC0_OFFSET))(this, a1, a2, a3);
	}
};
