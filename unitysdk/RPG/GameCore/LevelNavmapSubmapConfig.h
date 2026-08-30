#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1253F0)
#define RPG_GAMECORE_LEVELNAVMAPSUBMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1255E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavmapSubmapConfig_TypeDefinitionIndex = 17030;

	class LevelNavmapSubmapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::MinimapAreaType Type; // 0x14
		::System::UInt32 AreaID; // 0x18
		::System::Int32 DefaultLayer; // 0x1C
		::System::UInt32 ParentSubmapID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPSUBMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavmapSubmapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavmapSubmapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPSUBMAPCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
