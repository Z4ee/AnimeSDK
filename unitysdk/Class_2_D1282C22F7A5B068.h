#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_026083D0A4F08738;

#define CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11D5A210)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_7B352AB79EC4AAF7_OFFSET UNITYSDK_OFFSET(0x11D5A450)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x11D5A630)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11D5A6E0)
#define CLASS_2_D1282C22F7A5B068__CTOR_OFFSET UNITYSDK_OFFSET(0x11D5A6D0)

inline static constexpr unsigned int Class_2_D1282C22F7A5B068_TypeDefinitionIndex = 82987;

class Class_2_D1282C22F7A5B068 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_026083D0A4F08738<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_6; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_7; // 0x28
	::MoleMole::MonoGamepadSelectable* Field_2_8; // 0x30
	::UnityEngine::RectTransform* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::Class_3_026083D0A4F08738<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_5; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_026083D0A4F08738<::MoleMole::UICommonRewardItemWidgetController*>*>* Method_2_7B352AB79EC4AAF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_026083D0A4F08738<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_7B352AB79EC4AAF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
