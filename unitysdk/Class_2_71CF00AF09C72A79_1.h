#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12C17EF0)
#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x12C17D40)
#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12C17F80)
#define CLASS_2_71CF00AF09C72A79_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C17F70)

inline static constexpr unsigned int Class_2_71CF00AF09C72A79_1_TypeDefinitionIndex = 82632;

class Class_2_71CF00AF09C72A79_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
