#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG_METHOD_3_1D36E07CFA00C755_OFFSET UNITYSDK_OFFSET(0x1D158F10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG_METHOD_3_D0DD9E73AFDC8331_OFFSET UNITYSDK_OFFSET(0x1D158EC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterBattleConfig_TypeDefinitionIndex = 19112;

	class GridFightModifierExecActionAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0DD9E73AFDC8331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG_METHOD_3_D0DD9E73AFDC8331_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D36E07CFA00C755(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBATTLECONFIG_METHOD_3_1D36E07CFA00C755_OFFSET))(a1, a2);
		}
	};
}
