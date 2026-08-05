#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_ACEECAD0D835D78E_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x17087CF0)
#define CLASS_2_ACEECAD0D835D78E_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x17087ED0)
#define CLASS_2_ACEECAD0D835D78E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17087FC0)
#define CLASS_2_ACEECAD0D835D78E__CTOR_OFFSET UNITYSDK_OFFSET(0x17087FB0)

inline static constexpr unsigned int Class_2_ACEECAD0D835D78E_TypeDefinitionIndex = 48918;

class Class_2_ACEECAD0D835D78E : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACEECAD0D835D78E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACEECAD0D835D78E_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACEECAD0D835D78E_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACEECAD0D835D78E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
