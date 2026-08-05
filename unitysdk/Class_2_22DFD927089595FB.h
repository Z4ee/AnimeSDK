#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_12;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_22DFD927089595FB_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x159F6880)
#define CLASS_2_22DFD927089595FB_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x159F6430)
#define CLASS_2_22DFD927089595FB_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x159F6690)
#define CLASS_2_22DFD927089595FB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x159F6980)
#define CLASS_2_22DFD927089595FB__CTOR_OFFSET UNITYSDK_OFFSET(0x159F6970)

inline static constexpr unsigned int Class_2_22DFD927089595FB_TypeDefinitionIndex = 91071;

class Class_2_22DFD927089595FB : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x48
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_12*>*>* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_12*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_12*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
