#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3631D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigHollowChessboardCameraDragSpeedItem_TypeDefinitionIndex = 60908;

	class ConfigHollowChessboardCameraDragSpeedItem : public ::System::Object
	{
	public:
		::System::Single MouseDragSpeedRatio; // 0x10
		::System::Single TouchDragSpeedZPosEffectRatio; // 0x14
		::System::Single MouseDragSpeedZPosEffectRatio; // 0x18
		::System::Single GamepadDragSpeedRatio; // 0x1C
		::System::Single TouchDragSpeedRatio; // 0x20
		::System::Single GamepadDragSpeedZPosEffectRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGHOLLOWCHESSBOARDCAMERADRAGSPEEDITEM__CTOR_OFFSET))(this);
		}
	};
}
