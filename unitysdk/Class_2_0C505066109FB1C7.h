#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E;
class Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_9;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0C505066109FB1C7_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x17F36CF0)
#define CLASS_2_0C505066109FB1C7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x17F37110)
#define CLASS_2_0C505066109FB1C7_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x17F36F20)
#define CLASS_2_0C505066109FB1C7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17F371C0)
#define CLASS_2_0C505066109FB1C7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F371B0)

inline static constexpr unsigned int Class_2_0C505066109FB1C7_TypeDefinitionIndex = 69100;

class Class_2_0C505066109FB1C7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E*>* Field_2_2; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_0C505066109FB1C7_Class_2_0EE0BA6ECD501D4E*>* Field_2_3; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_9*>*>* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C505066109FB1C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C505066109FB1C7_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C505066109FB1C7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_9*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0C505066109FB1C7_Class_2_EF16346D79C18F15_9*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C505066109FB1C7_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C505066109FB1C7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
