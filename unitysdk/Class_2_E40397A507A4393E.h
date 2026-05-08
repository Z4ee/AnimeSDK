#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E40397A507A4393E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11F20230)
#define CLASS_2_E40397A507A4393E_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x11F20100)
#define CLASS_2_E40397A507A4393E__CTOR_OFFSET UNITYSDK_OFFSET(0x11F20220)

inline static constexpr unsigned int Class_2_E40397A507A4393E_TypeDefinitionIndex = 40386;

class Class_2_E40397A507A4393E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
