#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_07434B967DE27004_OFFSET UNITYSDK_OFFSET(0x1D808750)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_5A5E0408562F2A3E_OFFSET UNITYSDK_OFFSET(0x1D8087B0)
#define RPG_GAMECORE_MARBLEABSORBTEAMMATES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8087A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAbsorbTeammates_TypeDefinitionIndex = 16849;

	class MarbleAbsorbTeammates : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Single AttackFactor; // 0x10
		::System::String* AttackFactorDynamic; // 0x18
		::System::Single HpFactor; // 0x20
		::System::String* HpFactorDynamic; // 0x28
		::System::Single RadiusFactor; // 0x30
		::System::String* RadiusFactorDynamic; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07434B967DE27004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAbsorbTeammates*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAbsorbTeammates*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_07434B967DE27004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A5E0408562F2A3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAbsorbTeammates* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAbsorbTeammates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEABSORBTEAMMATES_METHOD_3_5A5E0408562F2A3E_OFFSET))(a1, a2);
		}
	};
}
