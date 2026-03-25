#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNPCNearbyConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1733F8B0)
#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1733ECF0)
#define RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1733F8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCNearbyEventConfig_TypeDefinitionIndex = 15866;

	class LevelNPCNearbyEventConfig : public ::RPG::GameCore::LevelNPCNearbyConfig
	{
	public:
		::System::String* ApproachEventName; // 0x28
		::System::String* DepartureEventName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyEventConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCNearbyEventConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCNearbyEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCNEARBYEVENTCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
