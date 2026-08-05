#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UINewbieGuideRoleItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_EE3E77F649925AF5_METHOD_2_11E01876B87C8ED5_OFFSET UNITYSDK_OFFSET(0x1820AB20)
#define CLASS_2_EE3E77F649925AF5_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1820A980)
#define CLASS_2_EE3E77F649925AF5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1820AD50)
#define CLASS_2_EE3E77F649925AF5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1820AD00)
#define CLASS_2_EE3E77F649925AF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1820AD40)

inline static constexpr unsigned int Class_2_EE3E77F649925AF5_TypeDefinitionIndex = 79282;

class Class_2_EE3E77F649925AF5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3E77F649925AF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE3E77F649925AF5_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3E77F649925AF5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>* Method_2_11E01876B87C8ED5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UINewbieGuideRoleItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE3E77F649925AF5_METHOD_2_11E01876B87C8ED5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE3E77F649925AF5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
