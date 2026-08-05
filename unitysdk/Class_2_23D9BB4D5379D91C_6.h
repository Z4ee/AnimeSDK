#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_23D9BB4D5379D91C_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1575DE40)
#define CLASS_2_23D9BB4D5379D91C_6_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1575DD00)
#define CLASS_2_23D9BB4D5379D91C_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1575DE30)

inline static constexpr unsigned int Class_2_23D9BB4D5379D91C_6_TypeDefinitionIndex = 77256;

class Class_2_23D9BB4D5379D91C_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Camera* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_0; // 0x40
	::UnityEngine::Transform* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_6_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_23D9BB4D5379D91C_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
