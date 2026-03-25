#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_895EBA3389065493;

#define CLASS_1_3B849E3502CE5CFD___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166BD9D0)
#define CLASS_1_3B849E3502CE5CFD___C__DISPLAYCLASS15_0__REMOVEMODIFIERBYID_B__0_OFFSET UNITYSDK_OFFSET(0x166BE030)

inline static constexpr unsigned int Class_1_3B849E3502CE5CFD___c__DisplayClass15_0_TypeDefinitionIndex = 28337;

class Class_1_3B849E3502CE5CFD___c__DisplayClass15_0 : public ::System::Object
{
public:
	::System::UInt32 modifierID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveModifierByID_b__0(::Class_1_895EBA3389065493* modifier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_895EBA3389065493*))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD___C__DISPLAYCLASS15_0__REMOVEMODIFIERBYID_B__0_OFFSET))(this, modifier);
	}
};
