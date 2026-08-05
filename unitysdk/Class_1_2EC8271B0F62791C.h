#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_2EC8271B0F62791C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x101AD420)
#define CLASS_1_2EC8271B0F62791C_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x101AD5C0)
#define CLASS_1_2EC8271B0F62791C_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x101AD470)
#define CLASS_1_2EC8271B0F62791C_METHOD_1_D4F033201DFBB6EB_OFFSET UNITYSDK_OFFSET(0x101AD5B0)
#define CLASS_1_2EC8271B0F62791C_METHOD_1_E874D0674F4612D5_OFFSET UNITYSDK_OFFSET(0x101AD650)
#define CLASS_1_2EC8271B0F62791C__CTOR_OFFSET UNITYSDK_OFFSET(0x101AD570)

inline static constexpr unsigned int Class_1_2EC8271B0F62791C_TypeDefinitionIndex = 46137;

class Class_1_2EC8271B0F62791C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x20; // 0x0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::RaycastHit>* Method_1_D4F033201DFBB6EB()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C_METHOD_1_D4F033201DFBB6EB_OFFSET))(this);
	}

	static ::Class_1_2EC8271B0F62791C* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_2EC8271B0F62791C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Int32 Method_1_E874D0674F4612D5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2EC8271B0F62791C_METHOD_1_E874D0674F4612D5_OFFSET))(this, a1, a2, a3, a4);
	}
};
