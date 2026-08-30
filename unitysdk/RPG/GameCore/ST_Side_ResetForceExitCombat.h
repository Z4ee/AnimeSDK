#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT_METHOD_4_39A7256930C0979C_OFFSET UNITYSDK_OFFSET(0x1D4D34D0)
#define RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT_METHOD_4_5B19805068C66599_OFFSET UNITYSDK_OFFSET(0x1D4D3400)
#define RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D34C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ResetForceExitCombat_TypeDefinitionIndex = 19890;

	class ST_Side_ResetForceExitCombat : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B19805068C66599(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ResetForceExitCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ResetForceExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT_METHOD_4_5B19805068C66599_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_39A7256930C0979C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ResetForceExitCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ResetForceExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_RESETFORCEEXITCOMBAT_METHOD_4_39A7256930C0979C_OFFSET))(a1, a2);
		}
	};
}
