#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_METHOD_3_CEAA55ACD4E770F8_OFFSET UNITYSDK_OFFSET(0x1B2CAD80)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_METHOD_3_E270391CDFBCE1AF_OFFSET UNITYSDK_OFFSET(0x1B2CAD20)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CAD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeWaitTimeByVote_TypeDefinitionIndex = 17604;

	class CakeRaceActionChangeWaitTimeByVote : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 VoteThreshold; // 0x10
		::System::Int32 MinWaitTime1; // 0x14
		::System::Int32 MaxWaitTime1; // 0x18
		::System::Int32 BaseWaitAdd1; // 0x1C
		::System::Int32 MinWaitTime2; // 0x20
		::System::Int32 MaxWaitTime2; // 0x24
		::System::Int32 BaseWaitAdd2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E270391CDFBCE1AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_METHOD_3_E270391CDFBCE1AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEAA55ACD4E770F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeWaitTimeByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEWAITTIMEBYVOTE_METHOD_3_CEAA55ACD4E770F8_OFFSET))(a1, a2);
		}
	};
}
