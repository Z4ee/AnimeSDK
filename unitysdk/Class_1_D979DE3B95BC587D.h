#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define CLASS_1_D979DE3B95BC587D_METHOD_1_5018E6D8A03A75F9_OFFSET UNITYSDK_OFFSET(0x118FF180)
#define CLASS_1_D979DE3B95BC587D_METHOD_1_59C90476E44D09C5_OFFSET UNITYSDK_OFFSET(0x119016C0)
#define CLASS_1_D979DE3B95BC587D_METHOD_1_7F2870B6C2E743E3_OFFSET UNITYSDK_OFFSET(0x11900C10)

inline static constexpr unsigned int Class_1_D979DE3B95BC587D_TypeDefinitionIndex = 38558;

class Class_1_D979DE3B95BC587D : public ::System::Object
{
public:
	static ::UnityEngine::Mesh* Method_1_5018E6D8A03A75F9()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_5018E6D8A03A75F9_OFFSET))();
	}

	static ::UnityEngine::Mesh* Method_1_7F2870B6C2E743E3()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_7F2870B6C2E743E3_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_59C90476E44D09C5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D979DE3B95BC587D_METHOD_1_59C90476E44D09C5_OFFSET))(a1, a2, a3);
	}
};
