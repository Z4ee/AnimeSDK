#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_037EA204E69EBC75;
class Class_2_C386A74518D39C8B;

#define CLASS_1_828910F366DD0524_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18D491B0)
#define CLASS_1_828910F366DD0524_METHOD_1_25EC93C6BA9CE98C_OFFSET UNITYSDK_OFFSET(0x18D496C0)
#define CLASS_1_828910F366DD0524_METHOD_1_30FFC2896E4A6D42_OFFSET UNITYSDK_OFFSET(0x18D4A2A0)
#define CLASS_1_828910F366DD0524_METHOD_1_90D560229B4C6FDF_OFFSET UNITYSDK_OFFSET(0x18D4AA30)
#define CLASS_1_828910F366DD0524_METHOD_1_BDAAADF8EC9F354B_OFFSET UNITYSDK_OFFSET(0x18D4BB50)
#define CLASS_1_828910F366DD0524_METHOD_1_C523BE89BDC1A4AC_OFFSET UNITYSDK_OFFSET(0x18D4BF30)
#define CLASS_1_828910F366DD0524_METHOD_1_C7FF21433486C346_OFFSET UNITYSDK_OFFSET(0x18D4A570)
#define CLASS_1_828910F366DD0524_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x18D4AFB0)
#define CLASS_1_828910F366DD0524__CTOR_OFFSET UNITYSDK_OFFSET(0x18D491A0)

inline static constexpr unsigned int Class_1_828910F366DD0524_TypeDefinitionIndex = 39507;

class Class_1_828910F366DD0524 : public ::System::Object
{
public:
	::Class_2_C386A74518D39C8B* Field_1_0; // 0x10
	::Class_1_D33B7D6901AE39E9* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_C386A74518D39C8B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_2_C386A74518D39C8B*))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_C7FF21433486C346()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_C7FF21433486C346_OFFSET))(this);
	}

	::System::Boolean Method_1_90D560229B4C6FDF(::Class_2_037EA204E69EBC75* a1, ::System::Boolean& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_037EA204E69EBC75*, ::System::Boolean&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_90D560229B4C6FDF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_25EC93C6BA9CE98C(::Class_2_037EA204E69EBC75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_037EA204E69EBC75*))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_25EC93C6BA9CE98C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_30FFC2896E4A6D42(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_30FFC2896E4A6D42_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_BDAAADF8EC9F354B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_BDAAADF8EC9F354B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C523BE89BDC1A4AC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_828910F366DD0524_METHOD_1_C523BE89BDC1A4AC_OFFSET))(this, a1, a2, a3, a4);
	}
};
