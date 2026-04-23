#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define CLASS_4_F6727781D6D80ED0___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C2E20)
#define CLASS_4_F6727781D6D80ED0___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xD9C3BE0)

inline static constexpr unsigned int Class_4_F6727781D6D80ED0___c__DisplayClass8_0_TypeDefinitionIndex = 65275;

class Class_4_F6727781D6D80ED0___c__DisplayClass8_0 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* mesh; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnObjectCreatedAsync_b__0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET))(this, m);
	}
};
