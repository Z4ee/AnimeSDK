#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_METHOD_2_670A69F796E8B346_OFFSET UNITYSDK_OFFSET(0x1D8DD1B0)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyParticipantSlot_TypeDefinitionIndex = 17542;

	class PetPartyParticipantSlot : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RequiredTag; // 0x10
		::System::String* RoleName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_670A69F796E8B346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyParticipantSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyParticipantSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSLOT_METHOD_2_670A69F796E8B346_OFFSET))(a1, a2);
		}
	};
}
