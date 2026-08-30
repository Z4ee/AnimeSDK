#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameBlockConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_METHOD_3_0AE6480C2E96E667_OFFSET UNITYSDK_OFFSET(0x1D1A5CE0)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_METHOD_3_D618A929A986F921_OFFSET UNITYSDK_OFFSET(0x1D1A5D40)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A5D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameHundredFloorBlockConfig_TypeDefinitionIndex = 18603;

	class MiniGameHundredFloorBlockConfig : public ::RPG::GameCore::BaseScrollGameBlockConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0AE6480C2E96E667(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_METHOD_3_0AE6480C2E96E667_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D618A929A986F921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorBlockConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORBLOCKCONFIG_METHOD_3_D618A929A986F921_OFFSET))(a1, a2);
		}
	};
}
