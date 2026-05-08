#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_72D2E63B32BDB80C_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x110D9580)
#define CLASS_2_72D2E63B32BDB80C_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x110D9920)
#define CLASS_2_72D2E63B32BDB80C_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x110D97D0)
#define CLASS_2_72D2E63B32BDB80C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x110D99F0)
#define CLASS_2_72D2E63B32BDB80C__CTOR_OFFSET UNITYSDK_OFFSET(0x110D99E0)

inline static constexpr unsigned int Class_2_72D2E63B32BDB80C_TypeDefinitionIndex = 38820;

class Class_2_72D2E63B32BDB80C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x58
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::MonoUITableScrollV2* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D2E63B32BDB80C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72D2E63B32BDB80C_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72D2E63B32BDB80C_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72D2E63B32BDB80C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D2E63B32BDB80C_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
