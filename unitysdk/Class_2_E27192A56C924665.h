#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E27192A56C924665_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x123D4170)
#define CLASS_2_E27192A56C924665_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x123D43B0)
#define CLASS_2_E27192A56C924665_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123D4510)
#define CLASS_2_E27192A56C924665__CTOR_OFFSET UNITYSDK_OFFSET(0x123D4500)

inline static constexpr unsigned int Class_2_E27192A56C924665_TypeDefinitionIndex = 86700;

class Class_2_E27192A56C924665 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::UnityEngine::GameObject* Field_2_8; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_3; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::UnityEngine::Transform* Field_2_2; // 0x58
	::UnityEngine::Animation* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E27192A56C924665__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E27192A56C924665_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E27192A56C924665_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E27192A56C924665_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
