#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET UNITYSDK_OFFSET(0x1703ABA0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_C2A1171F702924FE_OFFSET UNITYSDK_OFFSET(0x1703AAD0)
#define RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1703AB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySimulateSpeedUp_TypeDefinitionIndex = 21536;

	class BySimulateSpeedUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C2A1171F702924FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_C2A1171F702924FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_12C1839BEA098814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySimulateSpeedUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySimulateSpeedUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSIMULATESPEEDUP_METHOD_4_12C1839BEA098814_OFFSET))(a1, a2);
		}
	};
}
