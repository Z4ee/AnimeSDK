#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_6923533940371990_OFFSET UNITYSDK_OFFSET(0x1CEF79E0)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_DDCF98CEDDE14F9D_OFFSET UNITYSDK_OFFSET(0x1CEF7A20)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueTournPermanantTalentState_TypeDefinitionIndex = 20988;

	class ByCompareRogueTournPermanantTalentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6923533940371990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_6923533940371990_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DDCF98CEDDE14F9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueTournPermanantTalentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNPERMANANTTALENTSTATE_METHOD_4_DDCF98CEDDE14F9D_OFFSET))(a1, a2);
		}
	};
}
