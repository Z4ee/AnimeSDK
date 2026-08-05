#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCitySwitchRoleSwitchPanelWidgetController; }
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_ADF5767B426052A5_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x166D6690)
#define CLASS_2_ADF5767B426052A5_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x166D6920)
#define CLASS_2_ADF5767B426052A5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x166D6A20)
#define CLASS_2_ADF5767B426052A5__CTOR_OFFSET UNITYSDK_OFFSET(0x166D6A10)

inline static constexpr unsigned int Class_2_ADF5767B426052A5_TypeDefinitionIndex = 47301;

class Class_2_ADF5767B426052A5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIPlayerSkinSwitchWidgetController*>* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIMainCitySwitchRoleSwitchPanelWidgetController*>* Field_2_1; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController*>* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADF5767B426052A5_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
