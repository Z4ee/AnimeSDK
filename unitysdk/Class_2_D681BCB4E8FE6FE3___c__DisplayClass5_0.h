#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_103;
class Class_2_D681BCB4E8FE6FE3;
class Class_2_FD51057495DB654F;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1935B800)
#define CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1935C020)

inline static constexpr unsigned int Class_2_D681BCB4E8FE6FE3___c__DisplayClass5_0_TypeDefinitionIndex = 72581;

class Class_2_D681BCB4E8FE6FE3___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::String* asset; // 0x10
	::System::Action* callback; // 0x18
	::Class_2_FD51057495DB654F* entity; // 0x20
	::Class_0_16E4307DCC419505_103* contexts; // 0x28
	::Class_2_D681BCB4E8FE6FE3* __4__this; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_D681BCB4E8FE6FE3___C__DISPLAYCLASS5_0__LOADASSETASYNC_B__0_OFFSET))(this, a1);
	}
};
