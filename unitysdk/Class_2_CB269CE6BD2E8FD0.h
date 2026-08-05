#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x12BA85A0)
#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x12BA87E0)
#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12BA8940)
#define CLASS_2_CB269CE6BD2E8FD0__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA8930)

inline static constexpr unsigned int Class_2_CB269CE6BD2E8FD0_TypeDefinitionIndex = 63879;

class Class_2_CB269CE6BD2E8FD0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_8; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
