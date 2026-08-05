#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0C93237CA4E39915_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x17C67B60)
#define CLASS_2_0C93237CA4E39915_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x17C67D10)
#define CLASS_2_0C93237CA4E39915_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17C67DE0)
#define CLASS_2_0C93237CA4E39915__CTOR_OFFSET UNITYSDK_OFFSET(0x17C67DD0)

inline static constexpr unsigned int Class_2_0C93237CA4E39915_TypeDefinitionIndex = 86065;

class Class_2_0C93237CA4E39915 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_11; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C93237CA4E39915_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
