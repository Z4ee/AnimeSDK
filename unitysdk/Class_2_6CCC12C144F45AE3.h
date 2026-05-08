#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_6CCC12C144F45AE3_Class_2_18984D98F01B0EDB;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_6CCC12C144F45AE3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x123D5E60)
#define CLASS_2_6CCC12C144F45AE3_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x123D5C70)
#define CLASS_2_6CCC12C144F45AE3_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x123D5A10)
#define CLASS_2_6CCC12C144F45AE3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123D5EF0)
#define CLASS_2_6CCC12C144F45AE3__CTOR_OFFSET UNITYSDK_OFFSET(0x123D5EE0)

inline static constexpr unsigned int Class_2_6CCC12C144F45AE3_TypeDefinitionIndex = 62028;

class Class_2_6CCC12C144F45AE3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_6CCC12C144F45AE3_Class_2_18984D98F01B0EDB*>*>* Field_2_7; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_9; // 0x40
	::UnityEngine::RectTransform* Field_2_8; // 0x48
	::UnityEngine::GameObject* Field_2_5; // 0x50
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x58
	::UnityEngine::GameObject* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCC12C144F45AE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6CCC12C144F45AE3_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6CCC12C144F45AE3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_6CCC12C144F45AE3_Class_2_18984D98F01B0EDB*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_6CCC12C144F45AE3_Class_2_18984D98F01B0EDB*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6CCC12C144F45AE3_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CCC12C144F45AE3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
