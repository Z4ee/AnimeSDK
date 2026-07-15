#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_2C1B7B9D8F8423EA_OFFSET UNITYSDK_OFFSET(0x1AF65460)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_6BB89862336E6384_OFFSET UNITYSDK_OFFSET(0x1AF654C0)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF654B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameHundredFloorWaveConfig_TypeDefinitionIndex = 18080;

	class MiniGameHundredFloorWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* MiddleBlockList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C1B7B9D8F8423EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_2C1B7B9D8F8423EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BB89862336E6384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_METHOD_3_6BB89862336E6384_OFFSET))(a1, a2);
		}
	};
}
