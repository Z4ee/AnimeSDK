#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_69DFC5637027D536_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x158440E0)
#define CLASS_2_69DFC5637027D536_1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x15844000)
#define CLASS_2_69DFC5637027D536_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158440D0)

inline static constexpr unsigned int Class_2_69DFC5637027D536_1_TypeDefinitionIndex = 51981;

class Class_2_69DFC5637027D536_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadModule* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69DFC5637027D536_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_69DFC5637027D536_1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_69DFC5637027D536_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
