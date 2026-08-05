#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_B7A68D43387CE5B2_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x161C6B90)
#define CLASS_2_B7A68D43387CE5B2_METHOD_2_3F4955BEA481F3D4_OFFSET UNITYSDK_OFFSET(0x161C6DC0)
#define CLASS_2_B7A68D43387CE5B2_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x161C6FC0)
#define CLASS_2_B7A68D43387CE5B2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x161C70B0)
#define CLASS_2_B7A68D43387CE5B2__CTOR_OFFSET UNITYSDK_OFFSET(0x161C70A0)

inline static constexpr unsigned int Class_2_B7A68D43387CE5B2_TypeDefinitionIndex = 49054;

class Class_2_B7A68D43387CE5B2 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::UnityEngine::Animation* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x40
	::System::Collections::Generic::List_1<::Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA*>* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA*>* Method_2_3F4955BEA481F3D4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B7A68D43387CE5B2_Class_1_65FA748610A1BCCA*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2_METHOD_2_3F4955BEA481F3D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B7A68D43387CE5B2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
