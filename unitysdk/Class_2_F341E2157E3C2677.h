#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_F341E2157E3C2677_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x11582450)
#define CLASS_2_F341E2157E3C2677_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x115827D0)
#define CLASS_2_F341E2157E3C2677_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x11582680)
#define CLASS_2_F341E2157E3C2677_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11582880)
#define CLASS_2_F341E2157E3C2677__CTOR_OFFSET UNITYSDK_OFFSET(0x11582870)

inline static constexpr unsigned int Class_2_F341E2157E3C2677_TypeDefinitionIndex = 62233;

class Class_2_F341E2157E3C2677 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::Class_2_134E5210FBBAC6E5* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::MonoUITableScrollV2* Field_2_0; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E2157E3C2677__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F341E2157E3C2677_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F341E2157E3C2677_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F341E2157E3C2677_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F341E2157E3C2677_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
