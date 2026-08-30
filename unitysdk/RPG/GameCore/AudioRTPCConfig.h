#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AUDIORTPCCONFIG_METHOD_2_3FF2A9279909AAA1_OFFSET UNITYSDK_OFFSET(0x1CE32C50)
#define RPG_GAMECORE_AUDIORTPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE32D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioRTPCConfig_TypeDefinitionIndex = 16212;

	class AudioRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single RTPCValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIORTPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3FF2A9279909AAA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioRTPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioRTPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIORTPCCONFIG_METHOD_2_3FF2A9279909AAA1_OFFSET))(a1, a2);
		}
	};
}
