#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_C4CAFB94F916032A_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x11EA5CC0)
#define CLASS_2_C4CAFB94F916032A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11EA5E20)
#define CLASS_2_C4CAFB94F916032A_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x11EA5BB0)
#define CLASS_2_C4CAFB94F916032A__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA5E10)

inline static constexpr unsigned int Class_2_C4CAFB94F916032A_TypeDefinitionIndex = 66202;

class Class_2_C4CAFB94F916032A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4CAFB94F916032A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C4CAFB94F916032A_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C4CAFB94F916032A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C4CAFB94F916032A_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
