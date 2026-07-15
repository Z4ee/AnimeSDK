#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_0479FC38196407E4_OFFSET UNITYSDK_OFFSET(0x1B2CC9E0)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_8F11DDA3C0014639_OFFSET UNITYSDK_OFFSET(0x1B2CCA80)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CCA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionTransportToFrontRandomCat_TypeDefinitionIndex = 17609;

	class CakeRaceActionTransportToFrontRandomCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0479FC38196407E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_0479FC38196407E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F11DDA3C0014639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_8F11DDA3C0014639_OFFSET))(a1, a2);
		}
	};
}
