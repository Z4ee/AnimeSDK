#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UICommonRewardItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x138E7500)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x138E7920)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_BA51672322B328B5_OFFSET UNITYSDK_OFFSET(0x138E7740)
#define CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138E79D0)
#define CLASS_2_D1282C22F7A5B068__CTOR_OFFSET UNITYSDK_OFFSET(0x138E79C0)

inline static constexpr unsigned int Class_2_D1282C22F7A5B068_TypeDefinitionIndex = 48278;

class Class_2_D1282C22F7A5B068 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UICommonRewardItemWidgetController*>*>* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::MoleMole::MonoGamepadSelectable* Field_2_11; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x50
	::MoleMole::NotificationBadgeEx* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UICommonRewardItemWidgetController*>*>* Method_2_BA51672322B328B5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_8EFAD1842D6DB295<::MoleMole::UICommonRewardItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_BA51672322B328B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D1282C22F7A5B068_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
