#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_222EA3071A64F7D9_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0xF728F00)
#define CLASS_2_222EA3071A64F7D9_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xF729050)
#define CLASS_2_222EA3071A64F7D9_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xF728C70)
#define CLASS_2_222EA3071A64F7D9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF729150)
#define CLASS_2_222EA3071A64F7D9__CTOR_OFFSET UNITYSDK_OFFSET(0xF729140)

inline static constexpr unsigned int Class_2_222EA3071A64F7D9_TypeDefinitionIndex = 47844;

class Class_2_222EA3071A64F7D9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_14; // 0x18
	::UnityEngine::Transform* Field_2_13; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x48
	::UnityEngine::Transform* Field_2_15; // 0x50
	::UnityEngine::Transform* Field_2_8; // 0x58
	::MoleMole::NotificationBadge* Field_2_9; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222EA3071A64F7D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222EA3071A64F7D9_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222EA3071A64F7D9_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222EA3071A64F7D9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222EA3071A64F7D9_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
