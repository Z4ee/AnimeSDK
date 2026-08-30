#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardRelationType.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_METHOD_2_98AC07BC7F967BC5_OFFSET UNITYSDK_OFFSET(0x1D0907E0)
#define RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D090970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardTeamRelationInfo_TypeDefinitionIndex = 16060;

	class FateRinCaseBoardTeamRelationInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardTeamType FromTeamType; // 0x10
		::RPG::GameCore::FateRinCaseBoardTeamType ToTeamType; // 0x14
		::RPG::GameCore::FateRinCaseBoardRelationType RelationType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98AC07BC7F967BC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateRinCaseBoardTeamRelationInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDTEAMRELATIONINFO_METHOD_2_98AC07BC7F967BC5_OFFSET))(a1, a2);
		}
	};
}
