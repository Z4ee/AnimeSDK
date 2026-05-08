#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_15D211EB7129E545_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x16A2E180)
#define CLASS_2_15D211EB7129E545_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x16A2E2F0)
#define CLASS_2_15D211EB7129E545_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16A2E3C0)
#define CLASS_2_15D211EB7129E545__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2E3B0)

inline static constexpr unsigned int Class_2_15D211EB7129E545_TypeDefinitionIndex = 64937;

class Class_2_15D211EB7129E545 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D211EB7129E545_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
