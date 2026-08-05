#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5BB615FAF8CE49B7_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0x113B02F0)
#define CLASS_2_5BB615FAF8CE49B7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x113B05A0)
#define CLASS_2_5BB615FAF8CE49B7_METHOD_2_D1E01C37A616FE99_OFFSET UNITYSDK_OFFSET(0x113B0440)
#define CLASS_2_5BB615FAF8CE49B7_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x113B01B0)
#define CLASS_2_5BB615FAF8CE49B7__CTOR_OFFSET UNITYSDK_OFFSET(0x113B0590)

inline static constexpr unsigned int Class_2_5BB615FAF8CE49B7_TypeDefinitionIndex = 62638;

class Class_2_5BB615FAF8CE49B7 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_11; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::Cinemachine::CinemachineVirtualCamera* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BB615FAF8CE49B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BB615FAF8CE49B7_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Method_2_D1E01C37A616FE99(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BB615FAF8CE49B7_METHOD_2_D1E01C37A616FE99_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BB615FAF8CE49B7_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BB615FAF8CE49B7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
