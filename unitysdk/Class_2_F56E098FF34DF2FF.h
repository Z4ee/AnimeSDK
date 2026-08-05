#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIMiniUIGameLevelSelectWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_F56E098FF34DF2FF_METHOD_2_1D89052F4DE2CA8E_OFFSET UNITYSDK_OFFSET(0x1588A8D0)
#define CLASS_2_F56E098FF34DF2FF_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0x1588AAB0)
#define CLASS_2_F56E098FF34DF2FF_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x1588A6C0)
#define CLASS_2_F56E098FF34DF2FF_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1588AC00)
#define CLASS_2_F56E098FF34DF2FF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1588AD10)
#define CLASS_2_F56E098FF34DF2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1588AD00)

inline static constexpr unsigned int Class_2_F56E098FF34DF2FF_TypeDefinitionIndex = 79749;

class Class_2_F56E098FF34DF2FF : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_6; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* Method_2_1D89052F4DE2CA8E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF_METHOD_2_1D89052F4DE2CA8E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F56E098FF34DF2FF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
