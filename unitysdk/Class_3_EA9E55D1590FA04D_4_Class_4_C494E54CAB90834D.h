#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EC48112425141A9B.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D_METHOD_4_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0xF3B17D0)
#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D_METHOD_4_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xF3B18A0)
#define CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B1A50)

inline static constexpr unsigned int Class_3_EA9E55D1590FA04D_4_Class_4_C494E54CAB90834D_TypeDefinitionIndex = 65386;

class Class_3_EA9E55D1590FA04D_4_Class_4_C494E54CAB90834D : public ::Class_3_EC48112425141A9B
{
public:
	::UnityEngine::GameObject* Field_4_1; // 0x28
	::UnityEngine::GameObject* Field_4_2; // 0x30
	::UnityEngine::GameObject* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79D44D69484C8F4A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D_METHOD_4_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9E55D1590FA04D_4_CLASS_4_C494E54CAB90834D_METHOD_4_DDA8A2337932DF10_OFFSET))(this);
	}
};
