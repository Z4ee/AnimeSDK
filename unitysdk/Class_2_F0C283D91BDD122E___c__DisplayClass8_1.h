#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F0C283D91BDD122E___c__DisplayClass8_0;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x188C83C0)
#define CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS8_1___REFRESHREPLACETVTEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0x188C8920)

inline static constexpr unsigned int Class_2_F0C283D91BDD122E___c__DisplayClass8_1_TypeDefinitionIndex = 57578;

class Class_2_F0C283D91BDD122E___c__DisplayClass8_1 : public ::System::Object
{
public:
	::Class_2_F0C283D91BDD122E___c__DisplayClass8_0* CS___8__locals1; // 0x10
	::System::String* textureKey; // 0x18
	::System::String* texturePath; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshReplaceTVTexture_b__0(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E___C__DISPLAYCLASS8_1___REFRESHREPLACETVTEXTURE_B__0_OFFSET))(this, a1);
	}
};
