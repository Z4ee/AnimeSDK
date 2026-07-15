#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_9B91F9179F6DB20D_METHOD_2_9CA5A80F6B5B9E01_1_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define STRUCT_2_9B91F9179F6DB20D_METHOD_2_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define STRUCT_2_9B91F9179F6DB20D_METHOD_2_E216D26925D0CC3C_1_OFFSET UNITYSDK_OFFSET(0xA4AED0)
#define STRUCT_2_9B91F9179F6DB20D_METHOD_2_E216D26925D0CC3C_OFFSET UNITYSDK_OFFSET(0xA4AE50)

inline static constexpr unsigned int Struct_2_9B91F9179F6DB20D_TypeDefinitionIndex = 74869;

struct alignas(8) Struct_2_9B91F9179F6DB20D
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28

	::System::Void Method_2_E216D26925D0CC3C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_9B91F9179F6DB20D_METHOD_2_E216D26925D0CC3C_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9B91F9179F6DB20D_METHOD_2_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_2_E216D26925D0CC3C_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + STRUCT_2_9B91F9179F6DB20D_METHOD_2_E216D26925D0CC3C_1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_9CA5A80F6B5B9E01_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9B91F9179F6DB20D_METHOD_2_9CA5A80F6B5B9E01_1_OFFSET))(this);
	}
};
