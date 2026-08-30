#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define CLASS_1_D979DE3B95BC587D_METHOD_1_4165058BFB664C3F_OFFSET UNITYSDK_OFFSET(0x157B8160)
#define CLASS_1_D979DE3B95BC587D_METHOD_1_59C90476E44D09C5_OFFSET UNITYSDK_OFFSET(0x157B8FE0)
#define CLASS_1_D979DE3B95BC587D_METHOD_1_F21F5D3529F72D41_OFFSET UNITYSDK_OFFSET(0x157B7010)

inline static constexpr unsigned int Class_1_D979DE3B95BC587D_TypeDefinitionIndex = 48158;

class Class_1_D979DE3B95BC587D : public ::System::Object
{
public:
	static ::UnityEngine::Mesh* Method_1_F21F5D3529F72D41()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_F21F5D3529F72D41_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_4165058BFB664C3F()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_4165058BFB664C3F_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_59C90476E44D09C5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_59C90476E44D09C5_OFFSET))(a1, a2, a3);
	}
};
