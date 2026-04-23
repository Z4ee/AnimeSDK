#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_METHOD_2_E8D9808AB1012557_OFFSET UNITYSDK_OFFSET(0x18DC5220)
#define RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC5260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupBackupCharacterPreset_TypeDefinitionIndex = 17148;

	class RtBattleLineupBackupCharacterPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8D9808AB1012557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleLineupBackupCharacterPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleLineupBackupCharacterPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPBACKUPCHARACTERPRESET_METHOD_2_E8D9808AB1012557_OFFSET))(a1, a2);
		}
	};
}
