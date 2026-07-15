#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_METHOD_3_22E06B807C493699_OFFSET UNITYSDK_OFFSET(0x1BA76DF0)
#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_METHOD_3_233FA242FE04973B_OFFSET UNITYSDK_OFFSET(0x1BA760F0)
#define RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA760E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardSingleTeamInfo_TypeDefinitionIndex = 15587;

	class FateRinCaseBoardSingleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Avatar; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22E06B807C493699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_METHOD_3_22E06B807C493699_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_233FA242FE04973B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardSingleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSINGLETEAMINFO_METHOD_3_233FA242FE04973B_OFFSET))(a1, a2);
		}
	};
}
