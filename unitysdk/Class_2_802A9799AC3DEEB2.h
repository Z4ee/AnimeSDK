#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class VerticalLayoutGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_802A9799AC3DEEB2_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0x194E4110)
#define CLASS_2_802A9799AC3DEEB2_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x194E4260)
#define CLASS_2_802A9799AC3DEEB2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x194E4310)
#define CLASS_2_802A9799AC3DEEB2_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x194E3E70)
#define CLASS_2_802A9799AC3DEEB2__CTOR_OFFSET UNITYSDK_OFFSET(0x194E4300)

inline static constexpr unsigned int Class_2_802A9799AC3DEEB2_TypeDefinitionIndex = 53063;

class Class_2_802A9799AC3DEEB2 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_11; // 0x18
	::MonoUITableScrollV2* Field_2_14; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x28
	::UnityEngine::UI::LayoutElement* Field_2_5; // 0x30
	::UnityEngine::UI::VerticalLayoutGroup* Field_2_6; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_7; // 0x40
	::UnityEngine::GameObject* Field_2_15; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_8; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x60
	::UnityEngine::GameObject* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_802A9799AC3DEEB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_802A9799AC3DEEB2_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_802A9799AC3DEEB2_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_802A9799AC3DEEB2_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_802A9799AC3DEEB2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
