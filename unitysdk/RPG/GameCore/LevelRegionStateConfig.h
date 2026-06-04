#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelRegionStateConditionSet; }

#define RPG_GAMECORE_LEVELREGIONSTATECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988A6E0)
#define RPG_GAMECORE_LEVELREGIONSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1988A7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateConfig_TypeDefinitionIndex = 16526;

	class LevelRegionStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StateID; // 0x10
		::RPG::GameCore::LevelRegionStateConditionSet* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
