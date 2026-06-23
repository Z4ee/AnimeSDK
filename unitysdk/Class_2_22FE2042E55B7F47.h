#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_22FE2042E55B7F47_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x13B38A10)
#define CLASS_2_22FE2042E55B7F47_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B38B70)
#define CLASS_2_22FE2042E55B7F47_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13B38930)
#define CLASS_2_22FE2042E55B7F47__CTOR_OFFSET UNITYSDK_OFFSET(0x13B38B60)

inline static constexpr unsigned int Class_2_22FE2042E55B7F47_TypeDefinitionIndex = 49272;

class Class_2_22FE2042E55B7F47 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22FE2042E55B7F47__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22FE2042E55B7F47_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22FE2042E55B7F47_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22FE2042E55B7F47_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
