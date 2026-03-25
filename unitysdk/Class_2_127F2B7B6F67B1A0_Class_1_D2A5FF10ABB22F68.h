#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x11819A20)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_38FC5D61BF321D79_OFFSET UNITYSDK_OFFSET(0x1181AB70)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1181CFE0)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68_TypeDefinitionIndex = 49108;

class Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Matrix4x4 Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_38FC5D61BF321D79(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_38FC5D61BF321D79_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}
};
