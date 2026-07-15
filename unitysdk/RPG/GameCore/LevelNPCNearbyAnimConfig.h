#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCNearbyConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B076E60)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B076540)
#define RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B076E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCNearbyAnimConfig_TypeDefinitionIndex = 16586;

	class LevelNPCNearbyAnimConfig : public ::RPG::GameCore::LevelNPCNearbyConfig
	{
	public:
		::System::UInt32 ApproachFreeStyleMotionID; // 0x28
		::System::UInt32 DepartureFreeStyleMotionID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCNearbyAnimConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYANIMCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
