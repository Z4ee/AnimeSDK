#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_2E219E2ACD32731E_OFFSET UNITYSDK_OFFSET(0x1D06A320)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_DDE44044370A775A_OFFSET UNITYSDK_OFFSET(0x1D06A370)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLostCoinAndGainMoreConfig_TypeDefinitionIndex = 18636;

	class GridFightModifierLostCoinAndGainMoreConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E219E2ACD32731E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_2E219E2ACD32731E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE44044370A775A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_DDE44044370A775A_OFFSET))(a1, a2);
		}
	};
}
