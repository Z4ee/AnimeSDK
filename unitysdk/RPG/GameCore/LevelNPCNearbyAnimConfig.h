#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCNearbyConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1733F580)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733ECB0)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1733F570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCNearbyAnimConfig_TypeDefinitionIndex = 15865;

	class LevelNPCNearbyAnimConfig : public ::RPG::GameCore::LevelNPCNearbyConfig
	{
	public:
		::System::UInt32 ApproachFreeStyleMotionID; // 0x28
		::System::UInt32 DepartureFreeStyleMotionID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyAnimConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyAnimConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
