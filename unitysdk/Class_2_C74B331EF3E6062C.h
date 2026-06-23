#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C74B331EF3E6062C_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x1413B160)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_7095683BF6D13E9A_OFFSET UNITYSDK_OFFSET(0x1413B2B0)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1413B410)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1413B020)
#define CLASS_2_C74B331EF3E6062C__CTOR_OFFSET UNITYSDK_OFFSET(0x1413B400)

inline static constexpr unsigned int Class_2_C74B331EF3E6062C_TypeDefinitionIndex = 58939;

class Class_2_C74B331EF3E6062C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::Cinemachine::CinemachineVirtualCamera* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Method_2_7095683BF6D13E9A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_7095683BF6D13E9A_OFFSET))(this, a1, a2);
	}
};
