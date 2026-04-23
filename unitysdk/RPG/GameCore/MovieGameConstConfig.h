#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityMovieStartBuffConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MOVIEGAMECONSTCONFIG_METHOD_2_FB3579EF1D51FDF8_OFFSET UNITYSDK_OFFSET(0x18B65E90)
#define RPG_GAMECORE_MOVIEGAMECONSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B661D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MovieGameConstConfig_TypeDefinitionIndex = 16650;

	class MovieGameConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* MovieGameLevelToConfig; // 0x10
		::System::UInt32 FinishGameWithoutMiss_AchievementID; // 0x18
		::System::UInt32 FlipPause_AchievementID; // 0x1C
		::System::UInt32 FeverOneMore_AchievementID; // 0x20
		::System::UInt32 NicePassContinuous_AchievementID; // 0x24
		::System::UInt32 DestoryAllEnemy_AchievementID; // 0x28
		::System::UInt32 TakeAllPropWithLevel_AchievementID; // 0x2C
		::System::UInt32 CounterBullet_AchievementID; // 0x30
		::System::UInt32 NoCounterBullet_AchievementID; // 0x34
		::RPG::GameCore::ActivityMovieStartBuffConfig* GameStartBuffConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVIEGAMECONSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB3579EF1D51FDF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MovieGameConstConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MovieGameConstConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVIEGAMECONSTCONFIG_METHOD_2_FB3579EF1D51FDF8_OFFSET))(a1, a2);
		}
	};
}
