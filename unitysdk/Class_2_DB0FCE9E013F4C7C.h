#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B70220)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x13B700E0)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13B70010)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x13B70180)
#define CLASS_2_DB0FCE9E013F4C7C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B70170)

inline static constexpr unsigned int Class_2_DB0FCE9E013F4C7C_TypeDefinitionIndex = 51424;

class Class_2_DB0FCE9E013F4C7C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::MoleMole::MonoGamepadSpaceList* Field_2_3; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
