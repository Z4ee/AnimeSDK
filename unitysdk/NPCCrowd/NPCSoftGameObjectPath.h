#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/NPCSoftAssetPath_1.h"

namespace UnityEngine { class GameObject; }

#define NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10670220)
#define NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x10670200)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftGameObjectPath_TypeDefinitionIndex = 49383;

	class NPCSoftGameObjectPath : public ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::GameObject*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTGAMEOBJECTPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}
