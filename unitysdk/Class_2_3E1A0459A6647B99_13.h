#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_13_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1344FE00)
#define CLASS_2_3E1A0459A6647B99_13_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1344FE90)
#define CLASS_2_3E1A0459A6647B99_13_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x1344FC40)
#define CLASS_2_3E1A0459A6647B99_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1344FE80)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_13_TypeDefinitionIndex = 71567;

class Class_2_3E1A0459A6647B99_13 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_2; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_13_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_13_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_13_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
