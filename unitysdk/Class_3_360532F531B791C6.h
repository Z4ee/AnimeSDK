#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_3_360532F531B791C6_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12CE47D0)
#define CLASS_3_360532F531B791C6_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x12CE4660)
#define CLASS_3_360532F531B791C6_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x12CE4870)
#define CLASS_3_360532F531B791C6__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE4A20)

inline static constexpr unsigned int Class_3_360532F531B791C6_TypeDefinitionIndex = 72407;

class Class_3_360532F531B791C6 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_3_7; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_360532F531B791C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_360532F531B791C6_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_360532F531B791C6_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_360532F531B791C6_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}
};
