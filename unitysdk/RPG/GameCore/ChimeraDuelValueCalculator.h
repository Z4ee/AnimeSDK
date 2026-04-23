#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelValueCalculateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_METHOD_3_1B0E6DF26266883D_OFFSET UNITYSDK_OFFSET(0x188071A0)
#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_METHOD_3_AB0F9B14D1EA382B_OFFSET UNITYSDK_OFFSET(0x18807140)
#define RPG_GAMECORE_CHIMERADUELVALUECALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18807190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueCalculator_TypeDefinitionIndex = 15160;

	class ChimeraDuelValueCalculator : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelValueCalculateType CalculateType; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB0F9B14D1EA382B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelValueCalculator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelValueCalculator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_METHOD_3_AB0F9B14D1EA382B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B0E6DF26266883D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelValueCalculator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelValueCalculator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELVALUECALCULATOR_METHOD_3_1B0E6DF26266883D_OFFSET))(a1, a2);
		}
	};
}
