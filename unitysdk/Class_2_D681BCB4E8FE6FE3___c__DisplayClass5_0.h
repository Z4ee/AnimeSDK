#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_85;
class Class_2_9850514C0F89B91A;
class Class_2_D681BCB4E8FE6FE3;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x883F770)
#define CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x883FE60)

inline static constexpr unsigned int Class_2_D681BCB4E8FE6FE3___c__DisplayClass5_0_TypeDefinitionIndex = 62257;

class Class_2_D681BCB4E8FE6FE3___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_85* contexts; // 0x10
	::System::String* asset; // 0x18
	::Class_2_D681BCB4E8FE6FE3* __4__this; // 0x20
	::Class_2_9850514C0F89B91A* entity; // 0x28
	::System::Action* callback; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, go);
	}
};
