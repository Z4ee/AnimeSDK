#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_46B1304F31463D00_2_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x1823E7B0)
#define CLASS_2_46B1304F31463D00_2_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1823E920)
#define CLASS_2_46B1304F31463D00_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1823E9F0)
#define CLASS_2_46B1304F31463D00_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1823E9E0)

inline static constexpr unsigned int Class_2_46B1304F31463D00_2_TypeDefinitionIndex = 59812;

class Class_2_46B1304F31463D00_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_2_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_2_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_46B1304F31463D00_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
