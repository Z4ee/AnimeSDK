#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define CLASS_4_B2587C457ADF95AB___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8E530)
#define CLASS_4_B2587C457ADF95AB___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1AB90010)

inline static constexpr unsigned int Class_4_B2587C457ADF95AB___c__DisplayClass8_0_TypeDefinitionIndex = 70750;

class Class_4_B2587C457ADF95AB___c__DisplayClass8_0 : public ::System::Object
{
public:
	::UnityEngine::MeshFilter* mesh; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnObjectCreatedAsync_b__0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_B2587C457ADF95AB___C__DISPLAYCLASS8_0__ONOBJECTCREATEDASYNC_B__0_OFFSET))(this, a1);
	}
};
