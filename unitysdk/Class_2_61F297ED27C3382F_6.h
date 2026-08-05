#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_61F297ED27C3382F_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF7C1A10)
#define CLASS_2_61F297ED27C3382F_6_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xF7C1930)
#define CLASS_2_61F297ED27C3382F_6__CTOR_OFFSET UNITYSDK_OFFSET(0xF7C1A00)

inline static constexpr unsigned int Class_2_61F297ED27C3382F_6_TypeDefinitionIndex = 46787;

class Class_2_61F297ED27C3382F_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61F297ED27C3382F_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61F297ED27C3382F_6_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61F297ED27C3382F_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
