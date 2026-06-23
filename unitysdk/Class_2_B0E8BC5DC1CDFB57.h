#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x179B7180)
#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x179B7370)
#define CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x179B7460)
#define CLASS_2_B0E8BC5DC1CDFB57__CTOR_OFFSET UNITYSDK_OFFSET(0x179B7450)

inline static constexpr unsigned int Class_2_B0E8BC5DC1CDFB57_TypeDefinitionIndex = 53766;

class Class_2_B0E8BC5DC1CDFB57 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0E8BC5DC1CDFB57_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
