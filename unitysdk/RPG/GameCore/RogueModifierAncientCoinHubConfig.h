#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_METHOD_3_2F2602855862A786_OFFSET UNITYSDK_OFFSET(0x1EEF78A0)
#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_METHOD_3_6774C356829B1422_OFFSET UNITYSDK_OFFSET(0x1EEF78F0)
#define RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF78E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAncientCoinHubConfig_TypeDefinitionIndex = 17595;

	class RogueModifierAncientCoinHubConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F2602855862A786(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAncientCoinHubConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAncientCoinHubConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_METHOD_3_2F2602855862A786_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6774C356829B1422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAncientCoinHubConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAncientCoinHubConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERANCIENTCOINHUBCONFIG_METHOD_3_6774C356829B1422_OFFSET))(a1, a2);
		}
	};
}
