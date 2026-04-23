#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_METHOD_2_17BAC2727871254B_OFFSET UNITYSDK_OFFSET(0x18622220)
#define RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18622390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityMovieStartBuffConfig_TypeDefinitionIndex = 16648;

	class ActivityMovieStartBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ClockParkEffectType, ::System::Single>* EffectMultiplication; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_17BAC2727871254B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityMovieStartBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityMovieStartBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_METHOD_2_17BAC2727871254B_OFFSET))(a1, a2);
		}
	};
}
