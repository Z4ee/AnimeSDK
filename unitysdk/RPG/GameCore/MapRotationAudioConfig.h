#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_METHOD_2_BFB3C00067290EC5_OFFSET UNITYSDK_OFFSET(0x1D49AEC0)
#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49AFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationAudioConfig_TypeDefinitionIndex = 16843;

	class MapRotationAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DeployPoseSwitcher; // 0x10
		::System::String* Player3CSpeedRTPC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BFB3C00067290EC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationAudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationAudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_METHOD_2_BFB3C00067290EC5_OFFSET))(a1, a2);
		}
	};
}
