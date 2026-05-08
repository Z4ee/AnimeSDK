#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_60638234271CCDB8_105_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1327E4A0)
#define CLASS_2_60638234271CCDB8_105_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1327E5F0)
#define CLASS_2_60638234271CCDB8_105_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1327E140)
#define CLASS_2_60638234271CCDB8_105__CTOR_OFFSET UNITYSDK_OFFSET(0x1327E5E0)

inline static constexpr unsigned int Class_2_60638234271CCDB8_105_TypeDefinitionIndex = 57606;

class Class_2_60638234271CCDB8_105 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_10; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_15; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_11; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_2_13; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x48
	::Class_3_6630F8877346891C<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_7; // 0x50
	::UnityEngine::GameObject* Field_2_14; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x60
	::Class_3_6630F8877346891C<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_8; // 0x68
	::MoleMole::NotificationBadge* Field_2_17; // 0x70
	::UnityEngine::GameObject* Field_2_9; // 0x78
	::UnityEngine::Transform* Field_2_0; // 0x80
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x88
	::UnityEngine::GameObject* Field_2_3; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x98
	::UnityEngine::GameObject* Field_2_16; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_105__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_105_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_105_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_105_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
