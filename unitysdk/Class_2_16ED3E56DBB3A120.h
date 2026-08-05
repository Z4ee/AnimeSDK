#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_16ED3E56DBB3A120_Class_2_2B4A00883B7DDDB4_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDisplayCaseEditWidgetController; }
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1380C6D0)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1380CAF0)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1380C980)
#define CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET UNITYSDK_OFFSET(0x1380CAE0)

inline static constexpr unsigned int Class_2_16ED3E56DBB3A120_TypeDefinitionIndex = 55120;

class Class_2_16ED3E56DBB3A120 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_16ED3E56DBB3A120_Class_2_2B4A00883B7DDDB4_1*>* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIDisplayCasePreviewWidgetController*>* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38
	::Class_3_826A30478DA34A69<::MoleMole::UIDisplayCaseEditWidgetController*>* Field_2_7; // 0x40
	::MoleMole::MonoGamepadVirtualCursor* Field_2_2; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
