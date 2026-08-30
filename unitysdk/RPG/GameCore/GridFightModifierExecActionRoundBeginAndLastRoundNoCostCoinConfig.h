#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_METHOD_3_008F031F41C735F0_OFFSET UNITYSDK_OFFSET(0x1EE6DB30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_METHOD_3_A87E96CA224847EC_OFFSET UNITYSDK_OFFSET(0x1EE6DB80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6DB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig_TypeDefinitionIndex = 19134;

	class GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_008F031F41C735F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_METHOD_3_008F031F41C735F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A87E96CA224847EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_METHOD_3_A87E96CA224847EC_OFFSET))(a1, a2);
		}
	};
}
