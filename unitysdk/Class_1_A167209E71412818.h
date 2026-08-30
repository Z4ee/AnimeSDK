#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A167209E71412818_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB73C500)
#define CLASS_1_A167209E71412818_METHOD_1_ECA72114536D14FE_OFFSET UNITYSDK_OFFSET(0xB73C430)
#define CLASS_1_A167209E71412818_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB73C510)
#define CLASS_1_A167209E71412818__CTOR_OFFSET UNITYSDK_OFFSET(0xB73C520)

inline static constexpr unsigned int Class_1_A167209E71412818_TypeDefinitionIndex = 73099;

class Class_1_A167209E71412818 : public ::System::Object
{
public:
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A167209E71412818__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ECA72114536D14FE(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A167209E71412818_METHOD_1_ECA72114536D14FE_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A167209E71412818_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A167209E71412818_SET_TRANSFORM_OFFSET))(this, a1);
	}
};
