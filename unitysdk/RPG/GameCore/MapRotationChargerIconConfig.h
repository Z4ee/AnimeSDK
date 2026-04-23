#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_METHOD_2_79BFD01625A3526D_OFFSET UNITYSDK_OFFSET(0x18A8DA80)
#define RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8DBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationChargerIconConfig_TypeDefinitionIndex = 16121;

	class MapRotationChargerIconConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChargerPropID; // 0x10
		::System::Boolean IsFull; // 0x14
		::System::UInt32 MinimapIconID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79BFD01625A3526D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationChargerIconConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationChargerIconConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERICONCONFIG_METHOD_2_79BFD01625A3526D_OFFSET))(a1, a2);
		}
	};
}
