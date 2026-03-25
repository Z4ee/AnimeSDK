#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEmotionConfig; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOCONFIG_METHOD_2_D50BB2CE71E8A4C2_OFFSET UNITYSDK_OFFSET(0x171DDD40)
#define RPG_GAMECORE_FIVEDIMAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DE0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioConfig_TypeDefinitionIndex = 15312;

	class FiveDimAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GameStateGroup; // 0x10
		::System::String* InGameState; // 0x18
		::System::String* OutGameState; // 0x20
		::System::String* EventOnEnter; // 0x28
		::System::String* EventOnExit; // 0x30
		::System::String* EventOnReborn; // 0x38
		::System::Single ListenerMaxDistance; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimRTPCConfig*>* RTPCConfigs; // 0x48
		::Il2CppArray<::RPG::GameCore::FiveDimEmotionConfig*>* ChenLingEmotionConfigs; // 0x50
		::System::String* WaterReflection_WaterInEvent; // 0x58
		::System::String* WaterReflection_WaterOutEvent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D50BB2CE71E8A4C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOCONFIG_METHOD_2_D50BB2CE71E8A4C2_OFFSET))(a1, a2);
		}
	};
}
