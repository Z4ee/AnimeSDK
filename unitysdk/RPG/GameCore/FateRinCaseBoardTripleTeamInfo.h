#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_METHOD_3_5A9E5DB61CE8A34D_OFFSET UNITYSDK_OFFSET(0x1E0D0F60)
#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_METHOD_3_FCAAC7225534345A_OFFSET UNITYSDK_OFFSET(0x1E0D02D0)
#define RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D02C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardTripleTeamInfo_TypeDefinitionIndex = 16058;

	class FateRinCaseBoardTripleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Master; // 0x38
		::System::Boolean IsShowMasterTag; // 0x3C
		::RPG::GameCore::FateRinCaseBoardAvatarType Servant; // 0x40
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo1; // 0x48
		::RPG::GameCore::FateRinCaseBoardAvatarType Master2; // 0x50
		::System::Boolean IsShowMaster2Tag; // 0x54
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo2; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A9E5DB61CE8A34D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_METHOD_3_5A9E5DB61CE8A34D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCAAC7225534345A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardTripleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTRIPLETEAMINFO_METHOD_3_FCAAC7225534345A_OFFSET))(a1, a2);
		}
	};
}
