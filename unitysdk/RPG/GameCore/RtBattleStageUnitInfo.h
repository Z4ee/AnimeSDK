#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLESTAGEUNITINFO_METHOD_2_C6589F5F0081613F_OFFSET UNITYSDK_OFFSET(0x1CCD8DA0)
#define RPG_GAMECORE_RTBATTLESTAGEUNITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleStageUnitInfo_TypeDefinitionIndex = 17841;

	class RtBattleStageUnitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::IVec2 Pos; // 0x14
		::System::Boolean UseTeamDir; // 0x1C
		::RPG::GameCore::FixPoint DirAngle; // 0x20
		::System::UInt32 UnitID; // 0x28
		::System::UInt32 Level; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEUNITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C6589F5F0081613F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleStageUnitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleStageUnitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEUNITINFO_METHOD_2_C6589F5F0081613F_OFFSET))(a1, a2);
		}
	};
}
