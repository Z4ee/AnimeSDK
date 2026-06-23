#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_081DC89E6FC143C9_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0xD32D9A0)
#define CLASS_2_081DC89E6FC143C9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD32DB30)
#define CLASS_2_081DC89E6FC143C9__CTOR_OFFSET UNITYSDK_OFFSET(0xD32DB20)

inline static constexpr unsigned int Class_2_081DC89E6FC143C9_TypeDefinitionIndex = 80144;

class Class_2_081DC89E6FC143C9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::CanvasGroup* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_081DC89E6FC143C9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_081DC89E6FC143C9_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_081DC89E6FC143C9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
