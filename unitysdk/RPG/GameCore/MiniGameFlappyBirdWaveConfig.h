#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_09F6C938873109F9_OFFSET UNITYSDK_OFFSET(0x18B29620)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_8A81B2542910F0A8_OFFSET UNITYSDK_OFFSET(0x18B295D0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B29610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdWaveConfig_TypeDefinitionIndex = 17870;

	class MiniGameFlappyBirdWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* MiddleBlockList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A81B2542910F0A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_8A81B2542910F0A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09F6C938873109F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_09F6C938873109F9_OFFSET))(a1, a2);
		}
	};
}
