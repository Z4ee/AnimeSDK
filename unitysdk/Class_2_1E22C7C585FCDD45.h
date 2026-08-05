#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1E22C7C585FCDD45_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0x12B7D6F0)
#define CLASS_2_1E22C7C585FCDD45_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x12B7D4F0)
#define CLASS_2_1E22C7C585FCDD45_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12B7D840)
#define CLASS_2_1E22C7C585FCDD45_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B7D910)
#define CLASS_2_1E22C7C585FCDD45__CTOR_OFFSET UNITYSDK_OFFSET(0x12B7D900)

inline static constexpr unsigned int Class_2_1E22C7C585FCDD45_TypeDefinitionIndex = 52732;

class Class_2_1E22C7C585FCDD45 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E22C7C585FCDD45__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E22C7C585FCDD45_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E22C7C585FCDD45_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E22C7C585FCDD45_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E22C7C585FCDD45_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}
};
