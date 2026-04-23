#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_3B899891800169B0_OFFSET UNITYSDK_OFFSET(0x1256ADB0)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x12569C90)
#define CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68__CTOR_OFFSET UNITYSDK_OFFSET(0x1256CFF0)

inline static constexpr unsigned int Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68_TypeDefinitionIndex = 55903;

class Class_2_127F2B7B6F67B1A0_Class_1_D2A5FF10ABB22F68 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Matrix4x4 Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B899891800169B0(::UnityEngine::Matrix4x4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_3B899891800169B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_127F2B7B6F67B1A0_CLASS_1_D2A5FF10ABB22F68_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
