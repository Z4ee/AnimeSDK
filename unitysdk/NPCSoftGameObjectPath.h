#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCSoftAssetPath_1.h"

namespace UnityEngine { class GameObject; }

#define NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xFB5B4D0)
#define NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xFB5B470)

inline static constexpr unsigned int NPCSoftGameObjectPath_TypeDefinitionIndex = 53349;

class NPCSoftGameObjectPath : public ::NPCSoftAssetPath_1<::UnityEngine::GameObject*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET))(this, path);
	}
};
