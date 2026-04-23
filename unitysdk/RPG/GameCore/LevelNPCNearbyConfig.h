#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4D1C0)
#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4CE90)
#define RPG_GAMECORE_LEVELNPCNEARBYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4CE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCNearbyConfig_TypeDefinitionIndex = 16390;

	class LevelNPCNearbyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ApproachRange; // 0x10
		::System::Single DepartureRange; // 0x14
		::RPG::MVector3 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
