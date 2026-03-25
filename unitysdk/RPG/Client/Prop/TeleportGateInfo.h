#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateInfo_TypeDefinitionIndex = 64345;

	struct alignas(8) TeleportGateInfo
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::System::UInt32 SwitchGroupID; // 0x18
		::System::UInt32 SwitchPropID; // 0x1C
		::System::Boolean ForbidAimRotation; // 0x20
		::System::String* TeleportTextOverride; // 0x28
		::System::String* RotateTextOverride; // 0x30
	};
}
