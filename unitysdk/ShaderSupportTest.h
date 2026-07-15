#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Shader; }

#define SHADERSUPPORTTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC746D0)

inline static constexpr unsigned int ShaderSupportTest_TypeDefinitionIndex = 41337;

class ShaderSupportTest : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::UnityEngine::Shader*>* shaders; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERSUPPORTTEST__CTOR_OFFSET))(this);
	}
};
