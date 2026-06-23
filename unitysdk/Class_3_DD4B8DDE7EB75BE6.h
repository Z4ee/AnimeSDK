#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define CLASS_3_DD4B8DDE7EB75BE6_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x1583CF70)
#define CLASS_3_DD4B8DDE7EB75BE6_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x1583CE60)
#define CLASS_3_DD4B8DDE7EB75BE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1583D1E0)

inline static constexpr unsigned int Class_3_DD4B8DDE7EB75BE6_TypeDefinitionIndex = 41583;

class Class_3_DD4B8DDE7EB75BE6 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_2; // 0x30
	::UnityEngine::UI::Extension::UISlider* Field_3_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_3; // 0x40
	::UnityEngine::RectTransform* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD4B8DDE7EB75BE6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_DD4B8DDE7EB75BE6_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD4B8DDE7EB75BE6_METHOD_3_0076C796B2045359_OFFSET))(this);
	}
};
