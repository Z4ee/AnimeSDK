#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_MIRRORMENTVALLEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15821F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MirrormentValleyConfig_TypeDefinitionIndex = 57379;

	class MirrormentValleyConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single MaxMoveSpeed; // 0x18
		::System::Single MoveBufferTime; // 0x1C
		::System::Single AttachSpeed; // 0x20
		::System::Single CursorScale; // 0x24
		::System::Single CursorMoveRatio; // 0x28
		::System::Single RotateSpeed; // 0x2C
		::System::Single FinishDelay; // 0x30
		::System::Single ResetTime; // 0x34
		::System::Single GearOffset; // 0x38
		::UnityEngine::Vector3 GearRotation; // 0x3C
		::UnityEngine::Vector3 GearScale; // 0x48
		::System::Single PathEffectSpeed; // 0x54
		::System::Single PathEffectDelay; // 0x58
		::System::Single MirrorEffectCD; // 0x5C
		::System::Single ItemShakeCD; // 0x60
		::System::Single ItemMatEffectDelay; // 0x64
		::System::Single ItemFadeInDelay; // 0x68
		::System::Single ItemFadeOutDelay; // 0x6C
		::System::UInt32 ThinkSentenceID; // 0x70
		::System::UInt32 SpecialThinkSentenceID; // 0x74
		::System::UInt32 RotateBlockSentenceID; // 0x78
		::System::UInt32 RotateStickSentenceID; // 0x7C
		::System::UInt32 RotateStickTimes; // 0x80
		::System::UInt32 PartialPassSentenceID; // 0x84
		::System::UInt32 WayPassSentenceID; // 0x88
		::System::Single BubbleTime; // 0x8C
		::System::Single ThinkBubbleCD; // 0x90
		::System::Single BubbleYOffset; // 0x94
		::System::String* BackGroundPrefab; // 0x98
		::System::String* CursorPrefab; // 0xA0
		::System::String* SilverGearPrefab; // 0xA8
		::System::String* GoldGearPrefab; // 0xB0
		::System::String* SilverGearIdleEffect; // 0xB8
		::System::String* SilverGearAppearEffect; // 0xC0
		::System::String* SilverGearDisappearEffect; // 0xC8
		::System::String* GoldGearIdleEffect; // 0xD0
		::System::String* GoldGearAppearEffect; // 0xD8
		::System::String* GoldGearDisappearEffect; // 0xE0
		::System::String* SelectItemEffect; // 0xE8
		::System::String* ItemMatEffect; // 0xF0
		::System::String* MirrorHoverEffect; // 0xF8
		::System::String* PathEffect; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MIRRORMENTVALLEYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
