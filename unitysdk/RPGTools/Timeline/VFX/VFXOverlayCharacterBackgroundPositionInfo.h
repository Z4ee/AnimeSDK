#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDPOSITIONINFO_METHOD_2_347449E9BE9C6843_OFFSET UNITYSDK_OFFSET(0xD06CBD0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundPositionInfo_TypeDefinitionIndex = 45939;

	struct alignas(4) VFXOverlayCharacterBackgroundPositionInfo
	{
		::UnityEngine::Vector2 Offset; // 0x10
		::System::Single Rotation; // 0x18
		::System::Single Scale; // 0x1C

		static ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo Method_2_347449E9BE9C6843()
		{
			return ((::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDPOSITIONINFO_METHOD_2_347449E9BE9C6843_OFFSET))();
		}
	};
}
