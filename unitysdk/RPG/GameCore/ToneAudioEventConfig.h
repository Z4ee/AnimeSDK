#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TONEAUDIOEVENTCONFIG_METHOD_2_FF00411C42720ECE_OFFSET UNITYSDK_OFFSET(0x19DEB7A0)
#define RPG_GAMECORE_TONEAUDIOEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEB940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToneAudioEventConfig_TypeDefinitionIndex = 15571;

	class ToneAudioEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* BattleToneEvent; // 0x10
		::System::String* BattleToneStopEvent; // 0x18
		::System::String* LoadingToneEvent; // 0x20
		::System::String* LoadingToneStopEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TONEAUDIOEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FF00411C42720ECE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToneAudioEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToneAudioEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TONEAUDIOEVENTCONFIG_METHOD_2_FF00411C42720ECE_OFFSET))(a1, a2);
		}
	};
}
