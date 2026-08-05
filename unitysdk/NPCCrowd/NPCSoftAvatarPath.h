#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Avatar; }

#define NPCCROWD_NPCSOFTAVATARPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xF6162C0)
#define NPCCROWD_NPCSOFTAVATARPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xF6162A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAvatarPath_TypeDefinitionIndex = 56450;

	class NPCSoftAvatarPath : public ::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Avatar*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTAVATARPATH__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSOFTAVATARPATH__CTOR_1_OFFSET))(this, path);
		}
	};
}
