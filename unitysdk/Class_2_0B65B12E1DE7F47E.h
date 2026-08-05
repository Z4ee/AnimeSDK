#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0B65B12E1DE7F47E_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1DE31AB0)
#define CLASS_2_0B65B12E1DE7F47E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1DE31D00)
#define CLASS_2_0B65B12E1DE7F47E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1DE31DD0)
#define CLASS_2_0B65B12E1DE7F47E__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE31DC0)

inline static constexpr unsigned int Class_2_0B65B12E1DE7F47E_TypeDefinitionIndex = 93355;

class Class_2_0B65B12E1DE7F47E : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_10; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_7; // 0x48
	::MonoUITableScrollV2* Field_2_3; // 0x50
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_11; // 0x58
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B65B12E1DE7F47E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0B65B12E1DE7F47E_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B65B12E1DE7F47E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0B65B12E1DE7F47E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
