#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_METHOD_3_4528D6B76AC207E9_OFFSET UNITYSDK_OFFSET(0x1E32CB10)
#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_METHOD_3_EB70E6191F533914_OFFSET UNITYSDK_OFFSET(0x1E32CBB0)
#define RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32CBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAbilityCastedCountValueGetter_TypeDefinitionIndex = 15824;

	class ChimeraDuelAbilityCastedCountValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4528D6B76AC207E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_METHOD_3_4528D6B76AC207E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB70E6191F533914(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAbilityCastedCountValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELABILITYCASTEDCOUNTVALUEGETTER_METHOD_3_EB70E6191F533914_OFFSET))(a1, a2);
		}
	};
}
