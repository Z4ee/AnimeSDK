#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D632684DB80530A;
class Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_6D632684DB80530A___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE65A0)
#define CLASS_2_6D632684DB80530A___C__DISPLAYCLASS25_0___LOADSCENETVTEXTURE_B__0_OFFSET UNITYSDK_OFFSET(0x18FE74B0)

inline static constexpr unsigned int Class_2_6D632684DB80530A___c__DisplayClass25_0_TypeDefinitionIndex = 68774;

class Class_2_6D632684DB80530A___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_2_6D632684DB80530A_Class_1_17F54E506533EDC7* slice; // 0x10
	::Class_2_6D632684DB80530A* __4__this; // 0x18
	::System::String* asset; // 0x20
	::System::Boolean callbackInvoked; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void __LoadSceneTVTexture_b__0(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_2_6D632684DB80530A___C__DISPLAYCLASS25_0___LOADSCENETVTEXTURE_B__0_OFFSET))(this, a1);
	}
};
