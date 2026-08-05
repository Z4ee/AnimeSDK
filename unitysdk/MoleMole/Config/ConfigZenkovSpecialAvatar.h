#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x162681A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZenkovSpecialAvatar_TypeDefinitionIndex = 53130;

	class ConfigZenkovSpecialAvatar : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::UInt32 PyroisAvatarID; // 0x58
		::System::String* PyroisExecuteQTEHintKey; // 0x60
		::System::String* PyroisBlinkAidQTEHintKey; // 0x68
		::Foundation::AssetPath PyroisButtonEmptyIconPath; // 0x70
		::Foundation::AssetPath PyroisButtonBlinkIconPath; // 0x80
		::Foundation::AssetPath PyroisButtonExecuteIconPath; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* RarityEffColorDict; // 0xA0
		::UnityEngine::Color ExecuteEffColor; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* EnablePyroisBlinkAnimatorTagList; // 0xB8
		::System::String* BlinkHoldAimModeKey; // 0xC0
		::System::String* BlinkTeleportAbilityTargetKey; // 0xC8
		::System::Single BlinkHoldModeEnterCD; // 0xD0
		::System::Single BlinkHoldModeEnterProtection; // 0xD4
		::System::Collections::Generic::List_1<::System::Int32>* InstantSwitchOutAvatarIDList; // 0xD8
		::System::Single YokaiLongPressThreshold; // 0xE0
		::System::String* YokaiWheelTimeSlowKey; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* RarityMatPathDict; // 0xF0
		::Foundation::AssetPath YokaiInStageDurationMatPath; // 0xF8
		::Foundation::AssetPath UseItemDisableMatPath; // 0x108
		::System::Boolean IgnoreYokaiOutStageEntityPause; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZENKOVSPECIALAVATAR__CTOR_OFFSET))(this);
		}
	};
}
