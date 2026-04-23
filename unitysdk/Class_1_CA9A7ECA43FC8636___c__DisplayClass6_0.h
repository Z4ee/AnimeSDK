#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA9A7ECA43FC8636;
class Class_2_1A8148841049062A;
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1296E9F0)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS6_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x12978CC0)

inline static constexpr unsigned int Class_1_CA9A7ECA43FC8636___c__DisplayClass6_0_TypeDefinitionIndex = 70530;

class Class_1_CA9A7ECA43FC8636___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_CA9A7ECA43FC8636* __4__this; // 0x10
	::Class_2_1A8148841049062A* item; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS6_0__EXECUTE_B__0_OFFSET))(this, go);
	}
};
