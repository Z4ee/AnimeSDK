#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6660DE6E19DC27BF;
class Class_2_B4F0A294E066CEDE;
namespace UnityEngine { class GameObject; }

#define CLASS_2_B4F0A294E066CEDE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B03A60)
#define CLASS_2_B4F0A294E066CEDE___C__DISPLAYCLASS7_0__LOADASSETASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x11B03BD0)

inline static constexpr unsigned int Class_2_B4F0A294E066CEDE___c__DisplayClass7_0_TypeDefinitionIndex = 70308;

class Class_2_B4F0A294E066CEDE___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_B4F0A294E066CEDE* __4__this; // 0x10
	::Class_2_6660DE6E19DC27BF* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadAssetAsync_b__0(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_B4F0A294E066CEDE___C__DISPLAYCLASS7_0__LOADASSETASYNC_B__0_OFFSET))(this, go);
	}
};
