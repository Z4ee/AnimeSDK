#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_METHOD_3_5D098A755C88F2AF_OFFSET UNITYSDK_OFFSET(0x1D8DD2F0)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_METHOD_3_D221A46229DFAE09_OFFSET UNITYSDK_OFFSET(0x1D8DC070)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyParticipantStandbyCondition_TypeDefinitionIndex = 17546;

	class PetPartyParticipantStandbyCondition : public ::RPG::GameCore::PetPartyInteractionCondition
	{
	public:
		::System::String* RoleName; // 0x10
		::System::Single MinDurationSeconds; // 0x18
		::System::Single MaxDurationSeconds; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D098A755C88F2AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyParticipantStandbyCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyParticipantStandbyCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_METHOD_3_5D098A755C88F2AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D221A46229DFAE09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyParticipantStandbyCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyParticipantStandbyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_METHOD_3_D221A46229DFAE09_OFFSET))(a1, a2);
		}
	};
}
