#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_METHOD_2_BBCF7B323B3A8579_OFFSET UNITYSDK_OFFSET(0x178A0000)
#define RPG_GAMECORE_TIMEREWINDPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindPreloadConfig_TypeDefinitionIndex = 15196;

	class TimeRewindPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ReleaseTime; // 0x10
		::System::UInt32 MaxPreloadCount; // 0x14
		::System::Single ReleaseDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BBCF7B323B3A8579(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPRELOADCONFIG_METHOD_2_BBCF7B323B3A8579_OFFSET))(a1, a2);
		}
	};
}
