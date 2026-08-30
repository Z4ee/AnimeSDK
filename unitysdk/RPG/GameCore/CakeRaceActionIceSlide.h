#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONICESLIDE_METHOD_3_69FE9A17A3527A82_OFFSET UNITYSDK_OFFSET(0x1CDD4240)
#define RPG_GAMECORE_CAKERACEACTIONICESLIDE_METHOD_3_BF932007E39A5703_OFFSET UNITYSDK_OFFSET(0x1CDD42D0)
#define RPG_GAMECORE_CAKERACEACTIONICESLIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FA570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionIceSlide_TypeDefinitionIndex = 18137;

	class CakeRaceActionIceSlide : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69FE9A17A3527A82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionIceSlide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionIceSlide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE_METHOD_3_69FE9A17A3527A82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF932007E39A5703(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionIceSlide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionIceSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONICESLIDE_METHOD_3_BF932007E39A5703_OFFSET))(a1, a2);
		}
	};
}
