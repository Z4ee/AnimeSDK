#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUIDamageTMPEffect;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DCBC67767A4E41A2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15368240)
#define CLASS_2_DCBC67767A4E41A2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x15368130)
#define CLASS_2_DCBC67767A4E41A2__CTOR_OFFSET UNITYSDK_OFFSET(0x15368230)

inline static constexpr unsigned int Class_2_DCBC67767A4E41A2_TypeDefinitionIndex = 58207;

class Class_2_DCBC67767A4E41A2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::UnityEngine::CanvasGroup* Field_2_5; // 0x30
	::MonoUIDamageTMPEffect* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DCBC67767A4E41A2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
