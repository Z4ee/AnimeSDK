#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B2E720)
#define RPG_GAMECORE_MISSIONITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2E810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionItemConfig_TypeDefinitionIndex = 18004;

	class MissionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MissionItemConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
