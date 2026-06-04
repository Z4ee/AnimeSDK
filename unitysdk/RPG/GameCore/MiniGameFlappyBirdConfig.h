#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameFlappyBirdWaveConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_METHOD_3_103553F3D49A75E3_OFFSET UNITYSDK_OFFSET(0x199402C0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_METHOD_3_B57BC4FE6F373B42_OFFSET UNITYSDK_OFFSET(0x19940330)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19940310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdConfig_TypeDefinitionIndex = 17897;

	class MiniGameFlappyBirdConfig : public ::RPG::GameCore::BaseScrollGameConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdWaveConfig*>* WaveConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_103553F3D49A75E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_METHOD_3_103553F3D49A75E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B57BC4FE6F373B42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_METHOD_3_B57BC4FE6F373B42_OFFSET))(a1, a2);
		}
	};
}
