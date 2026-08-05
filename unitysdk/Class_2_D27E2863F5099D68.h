#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D27E2863F5099D68_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11155540)
#define CLASS_2_D27E2863F5099D68_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x11155400)
#define CLASS_2_D27E2863F5099D68__CTOR_OFFSET UNITYSDK_OFFSET(0x11155530)

inline static constexpr unsigned int Class_2_D27E2863F5099D68_TypeDefinitionIndex = 78634;

class Class_2_D27E2863F5099D68 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_6; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_5; // 0x30
	::MoleMole::MonoInputKey* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D27E2863F5099D68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D27E2863F5099D68_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D27E2863F5099D68_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
