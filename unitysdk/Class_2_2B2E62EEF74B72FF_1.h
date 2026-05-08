#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x140885B0)
#define CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x140887A0)
#define CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14088850)
#define CLASS_2_2B2E62EEF74B72FF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14088840)

inline static constexpr unsigned int Class_2_2B2E62EEF74B72FF_1_TypeDefinitionIndex = 65346;

class Class_2_2B2E62EEF74B72FF_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
