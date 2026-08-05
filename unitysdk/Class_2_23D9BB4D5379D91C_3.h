#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_23D9BB4D5379D91C_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13C51130)
#define CLASS_2_23D9BB4D5379D91C_3_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13C50F40)
#define CLASS_2_23D9BB4D5379D91C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13C51120)

inline static constexpr unsigned int Class_2_23D9BB4D5379D91C_3_TypeDefinitionIndex = 58210;

class Class_2_23D9BB4D5379D91C_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_19; // 0x18
	::UnityEngine::GameObject* Field_2_14; // 0x20
	::UnityEngine::GameObject* Field_2_12; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_15; // 0x38
	::UnityEngine::GameObject* Field_2_13; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::UnityEngine::GameObject* Field_2_8; // 0x50
	::UnityEngine::Camera* Field_2_4; // 0x58
	::UnityEngine::Transform* Field_2_11; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_7; // 0x70
	::UnityEngine::GameObject* Field_2_9; // 0x78
	::UnityEngine::GameObject* Field_2_6; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_3_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
