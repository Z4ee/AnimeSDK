#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelRegionConnectivityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELREGIONCONNECTIVITY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B087B70)
#define RPG_GAMECORE_LEVELREGIONCONNECTIVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B087DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionConnectivity_TypeDefinitionIndex = 16681;

	class LevelRegionConnectivity : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FromRegionID; // 0x10
		::System::UInt32 ToRegionID; // 0x14
		::System::Boolean HasConnectWayPoint; // 0x18
		::System::String* ConnectPointKey; // 0x20
		::RPG::GameCore::LevelRegionConnectivityType ConnectionType; // 0x28
		::System::String* Destination; // 0x30
		::RPG::GameCore::LevelNavNodeConditionInfos* ConditionInfos; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONCONNECTIVITY__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionConnectivity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionConnectivity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONCONNECTIVITY_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
