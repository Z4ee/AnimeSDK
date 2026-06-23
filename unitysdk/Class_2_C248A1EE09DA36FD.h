#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_C248A1EE09DA36FD_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1806DBF0)
#define CLASS_2_C248A1EE09DA36FD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1806DCC0)
#define CLASS_2_C248A1EE09DA36FD_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x1806DA70)
#define CLASS_2_C248A1EE09DA36FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1806DCB0)

inline static constexpr unsigned int Class_2_C248A1EE09DA36FD_TypeDefinitionIndex = 84010;

class Class_2_C248A1EE09DA36FD : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C248A1EE09DA36FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C248A1EE09DA36FD_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C248A1EE09DA36FD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C248A1EE09DA36FD_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
