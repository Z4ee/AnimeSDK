#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGachaRolePoolWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_62D90FE72BD47D4C_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x185D5450)
#define CLASS_2_62D90FE72BD47D4C_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x185D4FA0)
#define CLASS_2_62D90FE72BD47D4C_METHOD_2_AB182940499E3B4C_OFFSET UNITYSDK_OFFSET(0x185D5270)
#define CLASS_2_62D90FE72BD47D4C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x185D5570)
#define CLASS_2_62D90FE72BD47D4C__CTOR_OFFSET UNITYSDK_OFFSET(0x185D5560)

inline static constexpr unsigned int Class_2_62D90FE72BD47D4C_TypeDefinitionIndex = 64772;

class Class_2_62D90FE72BD47D4C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_14; // 0x38
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGachaRolePoolWidgetController*>*>* Field_2_0; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x58
	::UnityEngine::Transform* Field_2_5; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_15; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x78
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D90FE72BD47D4C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_62D90FE72BD47D4C_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGachaRolePoolWidgetController*>*>* Method_2_AB182940499E3B4C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGachaRolePoolWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_62D90FE72BD47D4C_METHOD_2_AB182940499E3B4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62D90FE72BD47D4C_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_62D90FE72BD47D4C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
