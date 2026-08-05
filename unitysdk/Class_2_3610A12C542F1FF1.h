#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3610A12C542F1FF1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133F6110)
#define CLASS_2_3610A12C542F1FF1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x133F6000)
#define CLASS_2_3610A12C542F1FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x133F6100)

inline static constexpr unsigned int Class_2_3610A12C542F1FF1_TypeDefinitionIndex = 91344;

class Class_2_3610A12C542F1FF1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3610A12C542F1FF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3610A12C542F1FF1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3610A12C542F1FF1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
