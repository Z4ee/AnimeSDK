#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78FBE34BADCAF595;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_78FBE34BADCAF595___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152E4940)
#define CLASS_1_78FBE34BADCAF595___C__DISPLAYCLASS1_0__LOADART_B__0_OFFSET UNITYSDK_OFFSET(0x152E4950)

inline static constexpr unsigned int Class_1_78FBE34BADCAF595___c__DisplayClass1_0_TypeDefinitionIndex = 54768;

class Class_1_78FBE34BADCAF595___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_78FBE34BADCAF595* __4__this; // 0x10
	::System::String* artAssetPath; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadArt_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_78FBE34BADCAF595___C__DISPLAYCLASS1_0__LOADART_B__0_OFFSET))(this, a1);
	}
};
