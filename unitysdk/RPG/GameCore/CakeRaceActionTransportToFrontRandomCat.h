#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_8F11DDA3C0014639_OFFSET UNITYSDK_OFFSET(0x17045DB0)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_B8ED97C2A5826417_OFFSET UNITYSDK_OFFSET(0x170470B0)
#define RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x17045D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionTransportToFrontRandomCat_TypeDefinitionIndex = 16839;

	class CakeRaceActionTransportToFrontRandomCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8ED97C2A5826417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_B8ED97C2A5826417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F11DDA3C0014639(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTRANSPORTTOFRONTRANDOMCAT_METHOD_3_8F11DDA3C0014639_OFFSET))(a1, a2);
		}
	};
}
