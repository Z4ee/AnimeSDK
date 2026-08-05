#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Transform; }

#define CLASS_2_325A0B89549C2BC4_1_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0x12A69480)
#define CLASS_2_325A0B89549C2BC4_1_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x12A69370)
#define CLASS_2_325A0B89549C2BC4_1_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x12A694F0)
#define CLASS_2_325A0B89549C2BC4_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12A695F0)
#define CLASS_2_325A0B89549C2BC4_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A69560)
#define CLASS_2_325A0B89549C2BC4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A69550)

inline static constexpr unsigned int Class_2_325A0B89549C2BC4_1_TypeDefinitionIndex = 82645;

class Class_2_325A0B89549C2BC4_1 : public ::Class_1_47EB23CB5C4B2615_1
{
public:
	::System::String* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::System::Threading::CancellationTokenSource* Field_2_6; // 0x28
	::MoleMole::Battle::Entity* Field_2_4; // 0x30
	::System::Single Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325A0B89549C2BC4_1_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}
};
