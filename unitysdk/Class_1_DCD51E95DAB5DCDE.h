#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_DCD51E95DAB5DCDE_METHOD_1_2AE3C25546D02F71_OFFSET UNITYSDK_OFFSET(0x1BC50260)
#define CLASS_1_DCD51E95DAB5DCDE_METHOD_1_4EC3159F6665F933_OFFSET UNITYSDK_OFFSET(0x1BC506B0)
#define CLASS_1_DCD51E95DAB5DCDE_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1BC4FF70)
#define CLASS_1_DCD51E95DAB5DCDE_METHOD_1_A34172469FBA6FD8_OFFSET UNITYSDK_OFFSET(0x1BC4FF80)
#define CLASS_1_DCD51E95DAB5DCDE_METHOD_1_C3DD72AA6F40467D_OFFSET UNITYSDK_OFFSET(0x1BC50A80)

inline static constexpr unsigned int Class_1_DCD51E95DAB5DCDE_TypeDefinitionIndex = 41369;

class Class_1_DCD51E95DAB5DCDE : public ::System::Object
{
public:
	static ::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DCD51E95DAB5DCDE_METHOD_1_832295EC279E5994_OFFSET))();
	}

	static ::UnityEngine::Texture2D* Method_1_A34172469FBA6FD8(::UnityEngine::Color a1, ::UnityEngine::Texture2D* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Color, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCD51E95DAB5DCDE_METHOD_1_A34172469FBA6FD8_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Texture2D* Method_1_2AE3C25546D02F71(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::UnityEngine::Texture2D* a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCD51E95DAB5DCDE_METHOD_1_2AE3C25546D02F71_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Texture2D* Method_1_4EC3159F6665F933(::UnityEngine::Gradient* a1, ::UnityEngine::Texture2D* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Gradient*, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCD51E95DAB5DCDE_METHOD_1_4EC3159F6665F933_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Texture2D* Method_1_C3DD72AA6F40467D(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::UnityEngine::Texture2D* a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Texture2D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DCD51E95DAB5DCDE_METHOD_1_C3DD72AA6F40467D_OFFSET))(a1, a2, a3, a4);
	}
};
