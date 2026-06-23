#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3BE1496267BD684C_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x18835920)
#define CLASS_2_3BE1496267BD684C_METHOD_2_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x18835B00)
#define CLASS_2_3BE1496267BD684C_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x18835C50)
#define CLASS_2_3BE1496267BD684C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18835D00)
#define CLASS_2_3BE1496267BD684C__CTOR_OFFSET UNITYSDK_OFFSET(0x18835CF0)

inline static constexpr unsigned int Class_2_3BE1496267BD684C_TypeDefinitionIndex = 55369;

class Class_2_3BE1496267BD684C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40
	::MonoUITableScrollV2* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE1496267BD684C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3BE1496267BD684C_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3BE1496267BD684C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BE1496267BD684C_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_39361D1F2D1BD8E3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3BE1496267BD684C_METHOD_2_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}
};
