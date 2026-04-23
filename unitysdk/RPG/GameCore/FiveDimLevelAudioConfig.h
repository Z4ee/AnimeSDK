#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_METHOD_2_3350751716BE7DAB_OFFSET UNITYSDK_OFFSET(0x18908060)
#define RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18908240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelAudioConfig_TypeDefinitionIndex = 17585;

	class FiveDimLevelAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventOnEnter; // 0x10
		::System::String* EventOnExit; // 0x18
		::System::String* InvincibleStateGroup; // 0x20
		::System::String* InvincibleOnState; // 0x28
		::System::String* InvincibleOffState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3350751716BE7DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelAudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelAudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELAUDIOCONFIG_METHOD_2_3350751716BE7DAB_OFFSET))(a1, a2);
		}
	};
}
