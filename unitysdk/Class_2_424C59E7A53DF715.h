#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_424C59E7A53DF715_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x161C4880)
#define CLASS_2_424C59E7A53DF715_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x161C49A0)
#define CLASS_2_424C59E7A53DF715_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x161C47B0)
#define CLASS_2_424C59E7A53DF715_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x161C4900)
#define CLASS_2_424C59E7A53DF715__CTOR_OFFSET UNITYSDK_OFFSET(0x161C48F0)

inline static constexpr unsigned int Class_2_424C59E7A53DF715_TypeDefinitionIndex = 81843;

class Class_2_424C59E7A53DF715 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_424C59E7A53DF715_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
