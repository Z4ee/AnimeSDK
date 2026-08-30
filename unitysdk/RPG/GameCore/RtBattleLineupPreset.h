#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLELINEUPPRESET_METHOD_2_DE2CF5C715B1E580_OFFSET UNITYSDK_OFFSET(0x1CCD7D90)
#define RPG_GAMECORE_RTBATTLELINEUPPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD7DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupPreset_TypeDefinitionIndex = 17838;

	class RtBattleLineupPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE2CF5C715B1E580(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleLineupPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleLineupPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESET_METHOD_2_DE2CF5C715B1E580_OFFSET))(a1, a2);
		}
	};
}
