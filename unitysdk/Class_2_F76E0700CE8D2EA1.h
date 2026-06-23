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
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x12B65190)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_4929D6E8F0740462_OFFSET UNITYSDK_OFFSET(0x12B64FB0)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x12B64CE0)
#define CLASS_2_F76E0700CE8D2EA1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B652B0)
#define CLASS_2_F76E0700CE8D2EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B652A0)

inline static constexpr unsigned int Class_2_F76E0700CE8D2EA1_TypeDefinitionIndex = 71898;

class Class_2_F76E0700CE8D2EA1 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGachaRolePoolWidgetController*>*>* Field_2_3; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x70
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_2_13; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGachaRolePoolWidgetController*>*>* Method_2_4929D6E8F0740462(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGachaRolePoolWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_4929D6E8F0740462_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E0700CE8D2EA1_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
