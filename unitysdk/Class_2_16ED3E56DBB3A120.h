#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_16ED3E56DBB3A120_Class_2_2B4A00883B7DDDB4;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDisplayCaseEditWidgetController; }
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0xEBDED20)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xEBDF140)
#define CLASS_2_16ED3E56DBB3A120_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xEBDEFD0)
#define CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDF130)

inline static constexpr unsigned int Class_2_16ED3E56DBB3A120_TypeDefinitionIndex = 53155;

class Class_2_16ED3E56DBB3A120 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDisplayCaseEditWidgetController*>* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDisplayCasePreviewWidgetController*>* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::MoleMole::MonoGamepadVirtualCursor* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50
	::Class_2_0D31A1661D004892<::Class_2_16ED3E56DBB3A120_Class_2_2B4A00883B7DDDB4*>* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16ED3E56DBB3A120_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
