#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHandBookSuibianItemWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0B01A07106427446_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1BA4C5E0)
#define CLASS_2_0B01A07106427446_METHOD_2_BCF0F873CBFAA54A_OFFSET UNITYSDK_OFFSET(0x1BA4C400)
#define CLASS_2_0B01A07106427446_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BA4C6E0)
#define CLASS_2_0B01A07106427446_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1BA4C170)
#define CLASS_2_0B01A07106427446__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4C6D0)

inline static constexpr unsigned int Class_2_0B01A07106427446_TypeDefinitionIndex = 64997;

class Class_2_0B01A07106427446 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x48
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHandBookSuibianItemWidgetController*>*>* Field_2_9; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x58
	::Class_3_826A30478DA34A69<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* Field_2_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B01A07106427446__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0B01A07106427446_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHandBookSuibianItemWidgetController*>*>* Method_2_BCF0F873CBFAA54A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHandBookSuibianItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0B01A07106427446_METHOD_2_BCF0F873CBFAA54A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0B01A07106427446_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B01A07106427446_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
