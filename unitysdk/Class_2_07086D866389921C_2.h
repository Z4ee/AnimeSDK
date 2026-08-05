#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_07086D866389921C_2_Class_2_B8419EF16018D853;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_07086D866389921C_2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12B12D60)
#define CLASS_2_07086D866389921C_2_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x12B12B70)
#define CLASS_2_07086D866389921C_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B12DE0)
#define CLASS_2_07086D866389921C_2_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x12B12990)
#define CLASS_2_07086D866389921C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12B12DD0)

inline static constexpr unsigned int Class_2_07086D866389921C_2_TypeDefinitionIndex = 68044;

class Class_2_07086D866389921C_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_2_Class_2_B8419EF16018D853*>*>* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_2_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_2_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_2_Class_2_B8419EF16018D853*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_2_Class_2_B8419EF16018D853*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_2_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
