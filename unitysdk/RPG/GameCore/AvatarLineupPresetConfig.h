#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }

#define RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_METHOD_2_FAF6BE1846EFFF86_OFFSET UNITYSDK_OFFSET(0x186C53D0)
#define RPG_GAMECORE_AVATARLINEUPPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186C5560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarLineupPresetConfig_TypeDefinitionIndex = 17234;

	class AvatarLineupPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarId; // 0x10
		::System::UInt32 EnhancedId; // 0x14
		::Il2CppArray<::RPG::GameCore::AvatarLineupKeyLevelConfig*>* KeyLevelConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FAF6BE1846EFFF86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarLineupPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarLineupPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_METHOD_2_FAF6BE1846EFFF86_OFFSET))(a1, a2);
		}
	};
}
