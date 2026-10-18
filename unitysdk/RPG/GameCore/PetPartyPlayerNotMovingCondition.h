#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_METHOD_3_7CC48C01799C8A74_OFFSET UNITYSDK_OFFSET(0x1D8DD340)
#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_METHOD_3_AD9A729A5BAD031C_OFFSET UNITYSDK_OFFSET(0x1D8DC1C0)
#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyPlayerNotMovingCondition_TypeDefinitionIndex = 17545;

	class PetPartyPlayerNotMovingCondition : public ::RPG::GameCore::PetPartyInteractionCondition
	{
	public:
		::System::Single MinDurationSeconds; // 0x10
		::System::Single MaxDurationSeconds; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7CC48C01799C8A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyPlayerNotMovingCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyPlayerNotMovingCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_METHOD_3_7CC48C01799C8A74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD9A729A5BAD031C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyPlayerNotMovingCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyPlayerNotMovingCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_METHOD_3_AD9A729A5BAD031C_OFFSET))(a1, a2);
		}
	};
}
