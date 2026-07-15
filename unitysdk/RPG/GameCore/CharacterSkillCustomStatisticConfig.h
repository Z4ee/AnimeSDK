#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_METHOD_2_D0C0635B3A495505_OFFSET UNITYSDK_OFFSET(0x1B72B070)
#define RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72B270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkillCustomStatisticConfig_TypeDefinitionIndex = 15883;

	class CharacterSkillCustomStatisticConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* AvatarSkillID2PerformTime; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* MonsterSkillID2PerformTime; // 0x18
		::Il2CppArray<::System::UInt32>* SkillMinPerformTimeCheckWhiteList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>* SkillMaxHitStatistic; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D0C0635B3A495505(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSkillCustomStatisticConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSkillCustomStatisticConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_METHOD_2_D0C0635B3A495505_OFFSET))(a1, a2);
		}
	};
}
