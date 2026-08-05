#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_07086D866389921C_Class_2_91EE61A16E3A7DF2;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_07086D866389921C_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1416CDE0)
#define CLASS_2_07086D866389921C_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x1416CBF0)
#define CLASS_2_07086D866389921C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1416CE70)
#define CLASS_2_07086D866389921C_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x1416CA40)
#define CLASS_2_07086D866389921C__CTOR_OFFSET UNITYSDK_OFFSET(0x1416CE60)

inline static constexpr unsigned int Class_2_07086D866389921C_TypeDefinitionIndex = 43709;

class Class_2_07086D866389921C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_Class_2_91EE61A16E3A7DF2*>*>* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_Class_2_91EE61A16E3A7DF2*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_07086D866389921C_Class_2_91EE61A16E3A7DF2*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07086D866389921C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
