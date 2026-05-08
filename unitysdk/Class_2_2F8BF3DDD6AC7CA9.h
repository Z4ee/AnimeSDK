#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x10B0E480)
#define CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10B0E530)
#define CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x10B0E1E0)
#define CLASS_2_2F8BF3DDD6AC7CA9__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0E520)

inline static constexpr unsigned int Class_2_2F8BF3DDD6AC7CA9_TypeDefinitionIndex = 61130;

class Class_2_2F8BF3DDD6AC7CA9 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_10; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58
	::UnityEngine::RectTransform* Field_2_11; // 0x60
	::UnityEngine::RectTransform* Field_2_4; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F8BF3DDD6AC7CA9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2F8BF3DDD6AC7CA9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
