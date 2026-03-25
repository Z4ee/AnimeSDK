#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_METHOD_2_4B1D339A5BCD2F69_OFFSET UNITYSDK_OFFSET(0x1789EB80)
#define RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1789ED70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindContainerAndSeedStaticBindInfo_TypeDefinitionIndex = 15200;

	class TimeRewindContainerAndSeedStaticBindInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 SeedOffset; // 0x10
		::System::Single SeedTriggerNormalizedTime; // 0x1C
		::System::String* PlatformFinalStateName; // 0x20
		::System::String* PlatformGrowTransitionName; // 0x28
		::System::Single SelectPointTransitionTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B1D339A5BCD2F69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindContainerAndSeedStaticBindInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindContainerAndSeedStaticBindInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCONTAINERANDSEEDSTATICBINDINFO_METHOD_2_4B1D339A5BCD2F69_OFFSET))(a1, a2);
		}
	};
}
