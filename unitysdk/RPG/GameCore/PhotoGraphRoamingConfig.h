#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BF7570)
#define RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF7710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphRoamingConfig_TypeDefinitionIndex = 18080;

	class PhotoGraphRoamingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoamingStyle; // 0x10
		::System::Single InitFovRatio; // 0x14
		::System::Single MaxFov; // 0x18
		::System::Single MinFov; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PhotoGraphRoamingConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphRoamingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHROAMINGCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
