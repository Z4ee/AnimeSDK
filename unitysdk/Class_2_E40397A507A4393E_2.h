#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E40397A507A4393E_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x107B8400)
#define CLASS_2_E40397A507A4393E_2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x107B8300)
#define CLASS_2_E40397A507A4393E_2__CTOR_OFFSET UNITYSDK_OFFSET(0x107B83F0)

inline static constexpr unsigned int Class_2_E40397A507A4393E_2_TypeDefinitionIndex = 71984;

class Class_2_E40397A507A4393E_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E_2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E40397A507A4393E_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
