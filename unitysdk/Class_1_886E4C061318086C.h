#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_886E4C061318086C_METHOD_1_336DFDB5749719BB_OFFSET UNITYSDK_OFFSET(0x14409D60)
#define CLASS_1_886E4C061318086C_METHOD_1_6E3C032C9D8D48AE_OFFSET UNITYSDK_OFFSET(0x14409E60)
#define CLASS_1_886E4C061318086C_METHOD_1_BC3D63492246CA32_OFFSET UNITYSDK_OFFSET(0x14409DF0)

inline static constexpr unsigned int Class_1_886E4C061318086C_TypeDefinitionIndex = 58150;

class Class_1_886E4C061318086C : public ::System::Object
{
public:
	static ::System::Boolean Method_1_336DFDB5749719BB(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_886E4C061318086C_METHOD_1_336DFDB5749719BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_BC3D63492246CA32(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_886E4C061318086C_METHOD_1_BC3D63492246CA32_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6E3C032C9D8D48AE(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_886E4C061318086C_METHOD_1_6E3C032C9D8D48AE_OFFSET))(a1, a2, a3, a4, a5);
	}
};
