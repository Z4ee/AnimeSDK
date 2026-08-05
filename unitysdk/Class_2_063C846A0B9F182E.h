#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoUIColorCollection; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_063C846A0B9F182E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x182387F0)
#define CLASS_2_063C846A0B9F182E_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x182385E0)
#define CLASS_2_063C846A0B9F182E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18238880)
#define CLASS_2_063C846A0B9F182E__CTOR_OFFSET UNITYSDK_OFFSET(0x18238870)

inline static constexpr unsigned int Class_2_063C846A0B9F182E_TypeDefinitionIndex = 57272;

class Class_2_063C846A0B9F182E : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoUIColorCollection* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::MoleMole::MonoUIColorCollection* Field_2_5; // 0x30
	::MoleMole::MonoUIColorCollection* Field_2_7; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
