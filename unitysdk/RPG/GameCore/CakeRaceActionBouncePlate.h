#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_METHOD_3_49B8BCA3CF243594_OFFSET UNITYSDK_OFFSET(0x1CDD2DC0)
#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_METHOD_3_A370AD421A930469_OFFSET UNITYSDK_OFFSET(0x1CDD2E60)
#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD2E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionBouncePlate_TypeDefinitionIndex = 18139;

	class CakeRaceActionBouncePlate : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49B8BCA3CF243594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBouncePlate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBouncePlate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_METHOD_3_49B8BCA3CF243594_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A370AD421A930469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionBouncePlate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionBouncePlate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_METHOD_3_A370AD421A930469_OFFSET))(a1, a2);
		}
	};
}
