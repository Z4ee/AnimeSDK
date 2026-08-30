#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_METHOD_3_AC5A8ACA06D174E9_OFFSET UNITYSDK_OFFSET(0x1CF6E1D0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_METHOD_3_D82BF4AADB4E6675_OFFSET UNITYSDK_OFFSET(0x1CF6E170)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6E1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeRobinRadiusByVote_TypeDefinitionIndex = 18130;

	class CakeRaceActionChangeRobinRadiusByVote : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 MinVoteCount; // 0x10
		::System::Int32 MaxVoteCount; // 0x14
		::System::Int32 AddRadiusPerVote; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D82BF4AADB4E6675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_METHOD_3_D82BF4AADB4E6675_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC5A8ACA06D174E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEROBINRADIUSBYVOTE_METHOD_3_AC5A8ACA06D174E9_OFFSET))(a1, a2);
		}
	};
}
