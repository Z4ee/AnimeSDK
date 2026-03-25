#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_METHOD_2_51032131C38E02EA_OFFSET UNITYSDK_OFFSET(0x1737F7D0)
#define RPG_GAMECORE_MAPROTATIONCHARGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1737F940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationChargerConfig_TypeDefinitionIndex = 15588;

	class MapRotationChargerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 Energy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_51032131C38E02EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationChargerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationChargerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCHARGERCONFIG_METHOD_2_51032131C38E02EA_OFFSET))(a1, a2);
		}
	};
}
