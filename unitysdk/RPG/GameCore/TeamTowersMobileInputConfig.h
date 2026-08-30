#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_METHOD_2_8F824FB4FB352647_OFFSET UNITYSDK_OFFSET(0x1E1CDFF0)
#define RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CEE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersMobileInputConfig_TypeDefinitionIndex = 18721;

	class TeamTowersMobileInputConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single SwipeThreshold; // 0x10
		::System::Single DownThreshold; // 0x14
		::System::Single DownAngleThreshold; // 0x18
		::System::UInt32 MoveProtectTimeMs; // 0x1C
		::System::UInt32 MoveRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F824FB4FB352647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersMobileInputConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersMobileInputConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSMOBILEINPUTCONFIG_METHOD_2_8F824FB4FB352647_OFFSET))(a1, a2);
		}
	};
}
