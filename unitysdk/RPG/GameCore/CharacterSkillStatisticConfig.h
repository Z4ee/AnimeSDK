#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_METHOD_2_E713244FD35CB6C2_OFFSET UNITYSDK_OFFSET(0x187D7E10)
#define RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187D7EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkillStatisticConfig_TypeDefinitionIndex = 15651;

	class CharacterSkillStatisticConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>* SkillMaxHitStatistic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E713244FD35CB6C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSkillStatisticConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSkillStatisticConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_METHOD_2_E713244FD35CB6C2_OFFSET))(a1, a2);
		}
	};
}
