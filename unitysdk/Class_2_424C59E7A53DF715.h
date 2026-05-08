#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_424C59E7A53DF715_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x147798C0)
#define CLASS_2_424C59E7A53DF715_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x147799E0)
#define CLASS_2_424C59E7A53DF715_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x147797F0)
#define CLASS_2_424C59E7A53DF715_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x14779940)
#define CLASS_2_424C59E7A53DF715__CTOR_OFFSET UNITYSDK_OFFSET(0x14779930)

inline static constexpr unsigned int Class_2_424C59E7A53DF715_TypeDefinitionIndex = 75828;

class Class_2_424C59E7A53DF715 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::UnityEngine::Animation* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
