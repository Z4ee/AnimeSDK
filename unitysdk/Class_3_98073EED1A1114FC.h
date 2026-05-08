#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_98073EED1A1114FC_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1463B990)
#define CLASS_3_98073EED1A1114FC_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x1463B820)
#define CLASS_3_98073EED1A1114FC_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1463BA10)
#define CLASS_3_98073EED1A1114FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1463BBC0)

inline static constexpr unsigned int Class_3_98073EED1A1114FC_TypeDefinitionIndex = 43612;

class Class_3_98073EED1A1114FC : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_B4378B46E0020E85* Field_3_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_0; // 0x30
	::MonoUITableScrollV2* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98073EED1A1114FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_98073EED1A1114FC_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98073EED1A1114FC_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98073EED1A1114FC_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
