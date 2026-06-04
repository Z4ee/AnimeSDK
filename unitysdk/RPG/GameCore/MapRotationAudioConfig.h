#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_METHOD_2_9FDBF47FE921E544_OFFSET UNITYSDK_OFFSET(0x198C0B10)
#define RPG_GAMECORE_MAPROTATIONAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198C0BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationAudioConfig_TypeDefinitionIndex = 16171;

	class MapRotationAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DeployPoseSwitcher; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9FDBF47FE921E544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationAudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationAudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONAUDIOCONFIG_METHOD_2_9FDBF47FE921E544_OFFSET))(a1, a2);
		}
	};
}
