#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardBaseTeamInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_METHOD_3_28C51F406E7DCD8B_OFFSET UNITYSDK_OFFSET(0x1E0CFD40)
#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_METHOD_3_52F0724818A51985_OFFSET UNITYSDK_OFFSET(0x1E0D06C0)
#define RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CFD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardDoubleTeamInfo_TypeDefinitionIndex = 16057;

	class FateRinCaseBoardDoubleTeamInfo : public ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo
	{
	public:
		::RPG::GameCore::FateRinCaseBoardAvatarType Master; // 0x38
		::System::Boolean IsShowMasterTag; // 0x3C
		::RPG::GameCore::FateRinCaseBoardAvatarType Servant; // 0x40
		::RPG::GameCore::FateRinCaseBoardHouguInfo* HouguInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_52F0724818A51985(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_METHOD_3_52F0724818A51985_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28C51F406E7DCD8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardDoubleTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDDOUBLETEAMINFO_METHOD_3_28C51F406E7DCD8B_OFFSET))(a1, a2);
		}
	};
}
