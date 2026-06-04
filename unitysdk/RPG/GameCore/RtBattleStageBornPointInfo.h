#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_METHOD_2_5A1C92B128FEEB3F_OFFSET UNITYSDK_OFFSET(0x19BDC420)
#define RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDC560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleStageBornPointInfo_TypeDefinitionIndex = 17161;

	class RtBattleStageBornPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::IVec2 Pos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A1C92B128FEEB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtBattleStageBornPointInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtBattleStageBornPointInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLESTAGEBORNPOINTINFO_METHOD_2_5A1C92B128FEEB3F_OFFSET))(a1, a2);
		}
	};
}
