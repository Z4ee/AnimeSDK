#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define LOCALFOGSPHEREINSTANCE___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A480710)
#define LOCALFOGSPHEREINSTANCE___C__DISPLAYCLASS41_0__ONOBJECTCREATEDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1A480C00)

inline static constexpr unsigned int LocalFogSphereInstance___c__DisplayClass41_0_TypeDefinitionIndex = 47932;

class LocalFogSphereInstance___c__DisplayClass41_0 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* mesh; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnObjectCreatedAsync_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE___C__DISPLAYCLASS41_0__ONOBJECTCREATEDASYNC_B__0_OFFSET))(this, a1);
	}
};
