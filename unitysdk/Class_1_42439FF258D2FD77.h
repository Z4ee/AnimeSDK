#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_42439FF258D2FD77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1785A350)
#define CLASS_1_42439FF258D2FD77_METHOD_1_2747B6E1C570CBE2_OFFSET UNITYSDK_OFFSET(0x1785A640)
#define CLASS_1_42439FF258D2FD77_METHOD_1_479759059E440327_1_OFFSET UNITYSDK_OFFSET(0x1785BF90)
#define CLASS_1_42439FF258D2FD77_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1785BF00)
#define CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1785BF80)
#define CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1785C010)
#define CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x1785C020)
#define CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1785BEF0)
#define CLASS_1_42439FF258D2FD77_METHOD_1_A20AD87C026D9BDE_OFFSET UNITYSDK_OFFSET(0x1785A3A0)
#define CLASS_1_42439FF258D2FD77_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1785BEE0)
#define CLASS_1_42439FF258D2FD77__CTOR_OFFSET UNITYSDK_OFFSET(0x1785A340)

inline static constexpr unsigned int Class_1_42439FF258D2FD77_TypeDefinitionIndex = 65396;

class Class_1_42439FF258D2FD77 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::Il2CppArray<::UnityEngine::Transform*>* Field_1_2; // 0x20
	::Il2CppArray<::UnityEngine::Transform*>* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A20AD87C026D9BDE(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::UInt32 a3, ::UnityEngine::AnimationCurve* a4, ::Il2CppArray<::UnityEngine::Transform*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::UInt32, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_A20AD87C026D9BDE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2747B6E1C570CBE2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_2747B6E1C570CBE2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_479759059E440327_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42439FF258D2FD77_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}
};
