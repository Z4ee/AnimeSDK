#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_7A8001399C5E1642_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x10928C00)
#define CLASS_2_7A8001399C5E1642_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10928FE0)
#define CLASS_2_7A8001399C5E1642_METHOD_2_8770616CEB49576D_OFFSET UNITYSDK_OFFSET(0x10928E00)
#define CLASS_2_7A8001399C5E1642_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x109290D0)
#define CLASS_2_7A8001399C5E1642__CTOR_OFFSET UNITYSDK_OFFSET(0x109290C0)

inline static constexpr unsigned int Class_2_7A8001399C5E1642_TypeDefinitionIndex = 46193;

class Class_2_7A8001399C5E1642 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralHeadRowWidgetController*>*>* Field_2_5; // 0x38
	::MonoUITableScrollV2* Field_2_1; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralHeadRowWidgetController*>*>* Method_2_8770616CEB49576D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralHeadRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_8770616CEB49576D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8001399C5E1642_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
