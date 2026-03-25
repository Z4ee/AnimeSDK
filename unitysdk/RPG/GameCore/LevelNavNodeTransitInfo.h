#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelRegionConnectivityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17340D10)
#define RPG_GAMECORE_LEVELNAVNODETRANSITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17340F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeTransitInfo_TypeDefinitionIndex = 15740;

	class LevelNavNodeTransitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FromNodeID; // 0x10
		::System::UInt32 ToNodeID; // 0x14
		::System::String* ConnectPointKey; // 0x18
		::System::Boolean HasConnectWayPoint; // 0x20
		::RPG::GameCore::LevelRegionConnectivityType ConnectionType; // 0x24
		::System::String* Destination; // 0x28
		::RPG::GameCore::LevelNavNodeConditionInfos* ConditionInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeTransitInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeTransitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODETRANSITINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
