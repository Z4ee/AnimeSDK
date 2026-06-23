#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_7ABF2118692E7A85_9_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x123E9360)
#define CLASS_2_7ABF2118692E7A85_9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123E9430)
#define CLASS_2_7ABF2118692E7A85_9__CTOR_OFFSET UNITYSDK_OFFSET(0x123E9420)

inline static constexpr unsigned int Class_2_7ABF2118692E7A85_9_TypeDefinitionIndex = 66180;

class Class_2_7ABF2118692E7A85_9 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_134E5210FBBAC6E5* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7ABF2118692E7A85_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7ABF2118692E7A85_9_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7ABF2118692E7A85_9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
