#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F0C283D91BDD122E;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188C7C40)
#define CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS6_0__REPLACETEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0x188C88E0)

inline static constexpr unsigned int Class_2_F0C283D91BDD122E___c__DisplayClass6_0_TypeDefinitionIndex = 57576;

class Class_2_F0C283D91BDD122E___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_F0C283D91BDD122E* __4__this; // 0x10
	::System::String* textureKey; // 0x18
	::System::String* nodeName; // 0x20
	::System::String* texturePath; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReplaceTexture_b__0(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS6_0__REPLACETEXTURE_B__0_OFFSET))(this, a1);
	}
};
