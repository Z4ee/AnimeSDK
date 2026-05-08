#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_635E72E5AB490154_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12C6F180)
#define CLASS_2_635E72E5AB490154_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12C6F070)
#define CLASS_2_635E72E5AB490154__CTOR_OFFSET UNITYSDK_OFFSET(0x12C6F170)

inline static constexpr unsigned int Class_2_635E72E5AB490154_TypeDefinitionIndex = 64867;

class Class_2_635E72E5AB490154 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadRegion* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_635E72E5AB490154__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_635E72E5AB490154_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_635E72E5AB490154_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
