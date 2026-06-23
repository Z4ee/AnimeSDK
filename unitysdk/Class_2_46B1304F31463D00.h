#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_46B1304F31463D00_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x143A89F0)
#define CLASS_2_46B1304F31463D00_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x143A8B60)
#define CLASS_2_46B1304F31463D00_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143A8C30)
#define CLASS_2_46B1304F31463D00__CTOR_OFFSET UNITYSDK_OFFSET(0x143A8C20)

inline static constexpr unsigned int Class_2_46B1304F31463D00_TypeDefinitionIndex = 55148;

class Class_2_46B1304F31463D00 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
