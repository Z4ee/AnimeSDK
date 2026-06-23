#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_8E6DA46064CC2025_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x17D9DEC0)
#define CLASS_2_8E6DA46064CC2025_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x17D9DC70)
#define CLASS_2_8E6DA46064CC2025_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17D9DF50)
#define CLASS_2_8E6DA46064CC2025__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9DF40)

inline static constexpr unsigned int Class_2_8E6DA46064CC2025_TypeDefinitionIndex = 47844;

class Class_2_8E6DA46064CC2025 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::UnityEngine::GameObject* Field_2_5; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::Class_2_FDFE69FE7B72463B* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E6DA46064CC2025__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E6DA46064CC2025_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E6DA46064CC2025_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E6DA46064CC2025_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
