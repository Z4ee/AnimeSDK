#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_METHOD_2_A7F01AF279A1FAF9_OFFSET UNITYSDK_OFFSET(0x18A8F2F0)
#define RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8F450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeIconConfig_TypeDefinitionIndex = 16120;

	class MapRotationVolumeIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 VolumePropID; // 0x10
		::System::Boolean IsDeployed; // 0x14
		::System::UInt32 MinimapIconID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A7F01AF279A1FAF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeIconConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeIconConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEICONCONFIG_METHOD_2_A7F01AF279A1FAF9_OFFSET))(a1, a2);
		}
	};
}
