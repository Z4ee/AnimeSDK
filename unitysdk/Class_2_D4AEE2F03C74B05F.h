#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIActivityReturnDoubleRowItemV2WidgetController; }
namespace MoleMole { class UIActivityReturnFreeMaterialWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_D4AEE2F03C74B05F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15FDF620)
#define CLASS_2_D4AEE2F03C74B05F_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x15FDF2B0)
#define CLASS_2_D4AEE2F03C74B05F_METHOD_2_985290C38B313219_OFFSET UNITYSDK_OFFSET(0x15FDF440)
#define CLASS_2_D4AEE2F03C74B05F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15FDF6B0)
#define CLASS_2_D4AEE2F03C74B05F__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDF6A0)

inline static constexpr unsigned int Class_2_D4AEE2F03C74B05F_TypeDefinitionIndex = 71225;

class Class_2_D4AEE2F03C74B05F : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>* Field_2_3; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnFreeMaterialWidgetController*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4AEE2F03C74B05F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D4AEE2F03C74B05F_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4AEE2F03C74B05F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D4AEE2F03C74B05F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>* Method_2_985290C38B313219(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D4AEE2F03C74B05F_METHOD_2_985290C38B313219_OFFSET))(this, a1, a2);
	}
};
