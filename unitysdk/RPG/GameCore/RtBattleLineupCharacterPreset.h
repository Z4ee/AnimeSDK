#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_METHOD_2_E6CF881FAEFCD7ED_OFFSET UNITYSDK_OFFSET(0x1CCD7CF0)
#define RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD7D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupCharacterPreset_TypeDefinitionIndex = 17836;

	class RtBattleLineupCharacterPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6CF881FAEFCD7ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleLineupCharacterPreset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleLineupCharacterPreset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPCHARACTERPRESET_METHOD_2_E6CF881FAEFCD7ED_OFFSET))(a1, a2);
		}
	};
}
