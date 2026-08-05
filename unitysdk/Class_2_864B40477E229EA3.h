#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_864B40477E229EA3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x18116120)
#define CLASS_2_864B40477E229EA3_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x18115F10)
#define CLASS_2_864B40477E229EA3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18116230)
#define CLASS_2_864B40477E229EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x18116220)

inline static constexpr unsigned int Class_2_864B40477E229EA3_TypeDefinitionIndex = 72718;

class Class_2_864B40477E229EA3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::MonoUITableScrollV2* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x48
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_11; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
