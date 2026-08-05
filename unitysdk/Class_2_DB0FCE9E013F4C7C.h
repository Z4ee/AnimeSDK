#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15757980)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x15757840)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x15757770)
#define CLASS_2_DB0FCE9E013F4C7C_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x157578E0)
#define CLASS_2_DB0FCE9E013F4C7C__CTOR_OFFSET UNITYSDK_OFFSET(0x157578D0)

inline static constexpr unsigned int Class_2_DB0FCE9E013F4C7C_TypeDefinitionIndex = 60644;

class Class_2_DB0FCE9E013F4C7C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_11; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::MoleMole::MonoGamepadSpaceList* Field_2_6; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x40
	::MonoUITableScrollV2* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB0FCE9E013F4C7C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
