#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelEntityRef; }

#define RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988BCB0)
#define RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1988BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelValidNavmapSubmapConfig_TypeDefinitionIndex = 16483;

	class LevelValidNavmapSubmapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SubmapID; // 0x10
		::System::UInt32 NearbyTeleportMappingInfoID; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelEntityRef*>* FiveDimInstances; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelValidNavmapSubmapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelValidNavmapSubmapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELVALIDNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
