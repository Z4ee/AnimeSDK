#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EC48112425141A9B.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1_METHOD_4_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0xE4A4340)
#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1_METHOD_4_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xE4A4410)
#define CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE4A45C0)

inline static constexpr unsigned int Class_3_4DFEF16562BE6605_3_Class_4_C494E54CAB90834D_1_TypeDefinitionIndex = 69061;

class Class_3_4DFEF16562BE6605_3_Class_4_C494E54CAB90834D_1 : public ::Class_3_EC48112425141A9B
{
public:
	::UnityEngine::GameObject* Field_4_2; // 0x28
	::UnityEngine::GameObject* Field_4_0; // 0x30
	::UnityEngine::GameObject* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79D44D69484C8F4A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1_METHOD_4_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DFEF16562BE6605_3_CLASS_4_C494E54CAB90834D_1_METHOD_4_DDA8A2337932DF10_OFFSET))(this);
	}
};
