#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F7162AA3F7858ECC_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1480A9F0)
#define CLASS_2_F7162AA3F7858ECC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1480AB40)
#define CLASS_2_F7162AA3F7858ECC__CTOR_OFFSET UNITYSDK_OFFSET(0x1480AB30)

inline static constexpr unsigned int Class_2_F7162AA3F7858ECC_TypeDefinitionIndex = 49105;

class Class_2_F7162AA3F7858ECC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x18
	::UnityEngine::CircleCollider2D* Field_2_1; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::CanvasGroup* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
