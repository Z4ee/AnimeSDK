#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOLLOWSLOTCONFIG_METHOD_2_6C2DAC714A993A1D_OFFSET UNITYSDK_OFFSET(0x17215080)
#define RPG_GAMECORE_FOLLOWSLOTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17215240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSlotConfig_TypeDefinitionIndex = 14312;

	class FollowSlotConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Angle; // 0x10
		::System::Single Distance; // 0x14
		::RPG::GameCore::FollowSideType Side; // 0x18
		::System::Int32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6C2DAC714A993A1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowSlotConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowSlotConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONFIG_METHOD_2_6C2DAC714A993A1D_OFFSET))(a1, a2);
		}
	};
}
