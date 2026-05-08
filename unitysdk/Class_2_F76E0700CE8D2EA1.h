#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGachaRolePoolWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x1206C780)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_4929D6E8F0740462_OFFSET UNITYSDK_OFFSET(0x1206C5A0)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1206C2D0)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1206C8A0)
#define CLASS_2_F76E0700CE8D2EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1206C890)

inline static constexpr unsigned int Class_2_F76E0700CE8D2EA1_TypeDefinitionIndex = 46926;

class Class_2_F76E0700CE8D2EA1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGachaRolePoolWidgetController*>*>* Field_2_3; // 0x30
	::UnityEngine::Transform* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x78
	::Class_3_30A064D7BE47C07D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_13; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGachaRolePoolWidgetController*>*>* Method_2_4929D6E8F0740462(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIGachaRolePoolWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_4929D6E8F0740462_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
