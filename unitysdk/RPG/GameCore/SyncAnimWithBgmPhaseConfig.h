#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_METHOD_2_0295ED74B723F060_OFFSET UNITYSDK_OFFSET(0x18EC97C0)
#define RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAnimWithBgmPhaseConfig_TypeDefinitionIndex = 21271;

	class SyncAnimWithBgmPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartTime; // 0x10
		::System::Single BlendParam; // 0x14
		::System::Single NorTimeOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0295ED74B723F060(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAnimWithBgmPhaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAnimWithBgmPhaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_METHOD_2_0295ED74B723F060_OFFSET))(a1, a2);
		}
	};
}
