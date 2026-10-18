#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartyInteractionCondition; }
namespace RPG::GameCore { class PetPartyParticipantSlot; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_METHOD_2_8E8185D57ED84B25_OFFSET UNITYSDK_OFFSET(0x1D909ED0)
#define RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionDefinition_TypeDefinitionIndex = 17552;

	class PetPartyInteractionDefinition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 Weight; // 0x18
		::System::Int32 Priority; // 0x1C
		::System::Boolean AllowOnMovingPlatform; // 0x20
		::Il2CppArray<::RPG::GameCore::PetPartyParticipantSlot*>* Participants; // 0x28
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCondition*>* Conditions; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PlayTaskSequence; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InterruptTaskSequence; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8E8185D57ED84B25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyInteractionDefinition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyInteractionDefinition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_METHOD_2_8E8185D57ED84B25_OFFSET))(a1, a2);
		}
	};
}
