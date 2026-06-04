#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_18570140CCF40FAD_OFFSET UNITYSDK_OFFSET(0x1952D520)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_DDCF98CEDDE14F9D_OFFSET UNITYSDK_OFFSET(0x1952D5E0)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1952D590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueTournPermanantTalentState_TypeDefinitionIndex = 20064;

	class ByCompareRogueTournPermanantTalentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_18570140CCF40FAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_18570140CCF40FAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDCF98CEDDE14F9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_DDCF98CEDDE14F9D_OFFSET))(a1, a2);
		}
	};
}
