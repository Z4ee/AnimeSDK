#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_89D8044AB73F8F6D_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA48EF20)
#define CLASS_1_89D8044AB73F8F6D_METHOD_1_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0xA48EEB0)
#define CLASS_1_89D8044AB73F8F6D_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA48EF30)
#define CLASS_1_89D8044AB73F8F6D__CTOR_OFFSET UNITYSDK_OFFSET(0xA48EF40)

inline static constexpr unsigned int Class_1_89D8044AB73F8F6D_TypeDefinitionIndex = 68352;

class Class_1_89D8044AB73F8F6D : public ::System::Object
{
public:
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89D8044AB73F8F6D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_89D8044AB73F8F6D_METHOD_1_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89D8044AB73F8F6D_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_89D8044AB73F8F6D_SET_TRANSFORM_OFFSET))(this, a1);
	}
};
