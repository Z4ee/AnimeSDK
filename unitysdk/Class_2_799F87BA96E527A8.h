#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInvitationMessageWidgetController; }
namespace MoleMole { class UIPrivateMessageNewMessageHintKeyWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_799F87BA96E527A8_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x17A7A170)
#define CLASS_2_799F87BA96E527A8_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17A7A3A0)
#define CLASS_2_799F87BA96E527A8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17A7A470)
#define CLASS_2_799F87BA96E527A8__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7A460)

inline static constexpr unsigned int Class_2_799F87BA96E527A8_TypeDefinitionIndex = 85181;

class Class_2_799F87BA96E527A8 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIInvitationMessageWidgetController*>* Field_2_10; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIPrivateMessageNewMessageHintKeyWidgetController*>* Field_2_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::MoleMole::MonoGamepadScrollView* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x40
	::MonoUITableScrollV2* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_799F87BA96E527A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_799F87BA96E527A8_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_799F87BA96E527A8_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_799F87BA96E527A8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
