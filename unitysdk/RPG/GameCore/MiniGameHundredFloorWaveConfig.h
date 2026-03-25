#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_83D121D1BF093727_OFFSET UNITYSDK_OFFSET(0x1741D4D0)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_E21986974EAA9902_OFFSET UNITYSDK_OFFSET(0x1741D520)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1741D510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameHundredFloorWaveConfig_TypeDefinitionIndex = 17265;

	class MiniGameHundredFloorWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* MiddleBlockList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_83D121D1BF093727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_83D121D1BF093727_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E21986974EAA9902(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_E21986974EAA9902_OFFSET))(a1, a2);
		}
	};
}
