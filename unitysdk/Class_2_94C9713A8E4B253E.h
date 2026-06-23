#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_94C9713A8E4B253E_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x13565930)
#define CLASS_2_94C9713A8E4B253E_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x13565770)
#define CLASS_2_94C9713A8E4B253E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13565A50)
#define CLASS_2_94C9713A8E4B253E__CTOR_OFFSET UNITYSDK_OFFSET(0x13565A40)

inline static constexpr unsigned int Class_2_94C9713A8E4B253E_TypeDefinitionIndex = 80963;

class Class_2_94C9713A8E4B253E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94C9713A8E4B253E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94C9713A8E4B253E_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94C9713A8E4B253E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94C9713A8E4B253E_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
