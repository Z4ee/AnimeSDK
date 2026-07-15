#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_202D7F8647E872E5_OFFSET UNITYSDK_OFFSET(0x1AF64C30)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_84264D619AE3D797_OFFSET UNITYSDK_OFFSET(0x1AF64C90)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF64C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdWaveConfig_TypeDefinitionIndex = 18077;

	class MiniGameFlappyBirdWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* MiddleBlockList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_202D7F8647E872E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_202D7F8647E872E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84264D619AE3D797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_METHOD_3_84264D619AE3D797_OFFSET))(a1, a2);
		}
	};
}
