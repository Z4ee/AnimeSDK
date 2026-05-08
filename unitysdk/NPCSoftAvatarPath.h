#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCSoftAssetPath_1.h"

namespace UnityEngine { class Avatar; }

#define NPCSOFTAVATARPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xEA5B330)
#define NPCSOFTAVATARPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xEA5B2D0)

inline static constexpr unsigned int NPCSoftAvatarPath_TypeDefinitionIndex = 49178;

class NPCSoftAvatarPath : public ::NPCSoftAssetPath_1<::UnityEngine::Avatar*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCSOFTAVATARPATH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Foundation::AssetPath path)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NPCSOFTAVATARPATH__CTOR_1_OFFSET))(this, path);
	}
};
