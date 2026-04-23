#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_8A11D65C6C7E69A3_OFFSET UNITYSDK_OFFSET(0x189BDA90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_DDE44044370A775A_OFFSET UNITYSDK_OFFSET(0x189BDB60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BDB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLostCoinAndGainMoreConfig_TypeDefinitionIndex = 18419;

	class GridFightModifierLostCoinAndGainMoreConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A11D65C6C7E69A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_8A11D65C6C7E69A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE44044370A775A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_METHOD_3_DDE44044370A775A_OFFSET))(a1, a2);
		}
	};
}
