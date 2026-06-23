#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_ADF5767B426052A5_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x1A830C30)
#define CLASS_2_ADF5767B426052A5_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1A830EC0)
#define CLASS_2_ADF5767B426052A5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A830FC0)
#define CLASS_2_ADF5767B426052A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A830FB0)

inline static constexpr unsigned int Class_2_ADF5767B426052A5_TypeDefinitionIndex = 71703;

class Class_2_ADF5767B426052A5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController*>* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_0; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIPlayerSkinSwitchWidgetController*>* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x40
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController*>* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
