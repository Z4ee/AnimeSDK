#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInLevelHouseRhythmChallengeWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_FF11149A2E1ACD52_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x139FD0E0)
#define CLASS_2_FF11149A2E1ACD52_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x139FCB90)
#define CLASS_2_FF11149A2E1ACD52_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x139FCF90)
#define CLASS_2_FF11149A2E1ACD52_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139FD170)
#define CLASS_2_FF11149A2E1ACD52_METHOD_2_F12F4C7F0CACD78C_OFFSET UNITYSDK_OFFSET(0x139FCDB0)
#define CLASS_2_FF11149A2E1ACD52__CTOR_OFFSET UNITYSDK_OFFSET(0x139FD160)

inline static constexpr unsigned int Class_2_FF11149A2E1ACD52_TypeDefinitionIndex = 78766;

class Class_2_FF11149A2E1ACD52 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_7; // 0x40
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIInLevelHouseRhythmChallengeWidgetController*>*>* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIInLevelHouseRhythmChallengeWidgetController*>*>* Method_2_F12F4C7F0CACD78C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIInLevelHouseRhythmChallengeWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52_METHOD_2_F12F4C7F0CACD78C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF11149A2E1ACD52_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
