#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIActivityReturnDoubleRowItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_D5096FAC8B2E1109_METHOD_2_8E390364FCCEAAED_OFFSET UNITYSDK_OFFSET(0x154200A0)
#define CLASS_2_D5096FAC8B2E1109_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15420280)
#define CLASS_2_D5096FAC8B2E1109_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15420300)
#define CLASS_2_D5096FAC8B2E1109_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1541FEF0)
#define CLASS_2_D5096FAC8B2E1109__CTOR_OFFSET UNITYSDK_OFFSET(0x154202F0)

inline static constexpr unsigned int Class_2_D5096FAC8B2E1109_TypeDefinitionIndex = 48104;

class Class_2_D5096FAC8B2E1109 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5096FAC8B2E1109__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D5096FAC8B2E1109_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Method_2_8E390364FCCEAAED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D5096FAC8B2E1109_METHOD_2_8E390364FCCEAAED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D5096FAC8B2E1109_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5096FAC8B2E1109_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
