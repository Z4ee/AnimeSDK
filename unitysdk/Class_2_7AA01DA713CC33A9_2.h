#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7AA01DA713CC33A9_2_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1B5832A0)
#define CLASS_2_7AA01DA713CC33A9_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1B583390)
#define CLASS_2_7AA01DA713CC33A9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B583380)

inline static constexpr unsigned int Class_2_7AA01DA713CC33A9_2_TypeDefinitionIndex = 69019;

class Class_2_7AA01DA713CC33A9_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
