#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_F71813D54A1980F5_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11BC6B50)
#define CLASS_2_F71813D54A1980F5_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x11BC6900)
#define CLASS_2_F71813D54A1980F5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11BC6C40)
#define CLASS_2_F71813D54A1980F5__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC6C30)

inline static constexpr unsigned int Class_2_F71813D54A1980F5_TypeDefinitionIndex = 60352;

class Class_2_F71813D54A1980F5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_10; // 0x38
	::MonoUITableScrollV2* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x50
	::UnityEngine::UI::Extension::UITabButton* Field_2_9; // 0x58
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_11; // 0x60
	::UnityEngine::UI::Text* Field_2_0; // 0x68
	::UnityEngine::Transform* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71813D54A1980F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F71813D54A1980F5_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F71813D54A1980F5_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F71813D54A1980F5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
