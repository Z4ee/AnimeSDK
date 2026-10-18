#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_METHOD_2_6A968C0751F698E7_OFFSET UNITYSDK_OFFSET(0x1D90AAF0)
#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_METHOD_2_92F7AC74145A9482_OFFSET UNITYSDK_OFFSET(0x1D90A4B0)
#define RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyNavigateDestination_TypeDefinitionIndex = 21082;

	class PetPartyNavigateDestination : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_92F7AC74145A9482(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyNavigateDestination*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyNavigateDestination*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_METHOD_2_92F7AC74145A9482_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6A968C0751F698E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyNavigateDestination* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyNavigateDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYNAVIGATEDESTINATION_METHOD_2_6A968C0751F698E7_OFFSET))(a1, a2);
		}
	};
}
