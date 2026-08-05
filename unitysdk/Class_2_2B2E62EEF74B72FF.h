#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2B2E62EEF74B72FF_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x16ECF210)
#define CLASS_2_2B2E62EEF74B72FF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x16ECF3E0)
#define CLASS_2_2B2E62EEF74B72FF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16ECF4B0)
#define CLASS_2_2B2E62EEF74B72FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECF4A0)

inline static constexpr unsigned int Class_2_2B2E62EEF74B72FF_TypeDefinitionIndex = 75755;

class Class_2_2B2E62EEF74B72FF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2B2E62EEF74B72FF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
