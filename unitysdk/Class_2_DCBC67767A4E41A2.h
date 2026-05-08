#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUIDamageTMPEffect;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DCBC67767A4E41A2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13C0D490)
#define CLASS_2_DCBC67767A4E41A2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13C0D380)
#define CLASS_2_DCBC67767A4E41A2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0D480)

inline static constexpr unsigned int Class_2_DCBC67767A4E41A2_TypeDefinitionIndex = 38243;

class Class_2_DCBC67767A4E41A2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::MonoUIDamageTMPEffect* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
