#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_METHOD_2_03E5173101B72F79_OFFSET UNITYSDK_OFFSET(0x1D8DC2B0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_METHOD_2_E422EDFFAFDA8F56_OFFSET UNITYSDK_OFFSET(0x1D8DBED0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionCondition_TypeDefinitionIndex = 17544;

	class PetPartyInteractionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E422EDFFAFDA8F56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyInteractionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyInteractionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_METHOD_2_E422EDFFAFDA8F56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_03E5173101B72F79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyInteractionCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyInteractionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_METHOD_2_03E5173101B72F79_OFFSET))(a1, a2);
		}
	};
}
