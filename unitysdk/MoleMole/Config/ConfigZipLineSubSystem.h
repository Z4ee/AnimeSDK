#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x127235A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineSubSystem_TypeDefinitionIndex = 46570;

	class ConfigZipLineSubSystem : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 SkillUnlockID; // 0x58
		::System::Int32 TransitionID; // 0x5C
		::System::String* AbilityName; // 0x60
		::System::String* SwitchAvatarCustomEvent; // 0x68
		::System::String* SwitchAvatarCustomEvent2; // 0x70
		::System::String* SwitchAvatarCustomEvent3; // 0x78
		::System::String* SwitchAvatarCustomEvent4; // 0x80
		::System::Int32 PyroisID; // 0x88
		::System::Int32 PyroisID_ZipLine; // 0x8C
		::System::Boolean BlockStreaming; // 0x90
		::System::Single CancelBlockStreaming; // 0x94
		::System::Boolean EnableSceneAreaOptimization; // 0x98
		::System::Boolean SearchSwitchByPrism; // 0x99
		::System::Boolean SearchSwitchByTangent; // 0x9A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINESUBSYSTEM__CTOR_OFFSET))(this);
		}
	};
}
