#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_184E347E78DEE23B_Class_2_CC03AAEE6FCC732C_4;
class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_184E347E78DEE23B_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x13860490)
#define CLASS_2_184E347E78DEE23B_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13860680)
#define CLASS_2_184E347E78DEE23B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13860780)
#define CLASS_2_184E347E78DEE23B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x13860240)
#define CLASS_2_184E347E78DEE23B__CTOR_OFFSET UNITYSDK_OFFSET(0x13860770)

inline static constexpr unsigned int Class_2_184E347E78DEE23B_TypeDefinitionIndex = 43445;

class Class_2_184E347E78DEE23B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::Class_2_134E5210FBBAC6E5* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_184E347E78DEE23B_Class_2_CC03AAEE6FCC732C_4*>*>* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_184E347E78DEE23B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_184E347E78DEE23B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_184E347E78DEE23B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_184E347E78DEE23B_Class_2_CC03AAEE6FCC732C_4*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_184E347E78DEE23B_Class_2_CC03AAEE6FCC732C_4*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_184E347E78DEE23B_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_184E347E78DEE23B_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
