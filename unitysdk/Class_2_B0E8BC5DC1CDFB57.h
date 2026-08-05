#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x18B294D0)
#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18B296C0)
#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B297B0)
#define CLASS_2_B0E8BC5DC1CDFB57__CTOR_OFFSET UNITYSDK_OFFSET(0x18B297A0)

inline static constexpr unsigned int Class_2_B0E8BC5DC1CDFB57_TypeDefinitionIndex = 84588;

class Class_2_B0E8BC5DC1CDFB57 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
