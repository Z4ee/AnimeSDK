#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_METHOD_3_9F4562E00FBE4E5F_OFFSET UNITYSDK_OFFSET(0x1EE6CC20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_METHOD_3_C4870D07F02B2E63_OFFSET UNITYSDK_OFFSET(0x1EE6CC70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBattleFailKeepWinConfig_TypeDefinitionIndex = 19142;

	class GridFightModifierBattleFailKeepWinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F4562E00FBE4E5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_METHOD_3_9F4562E00FBE4E5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4870D07F02B2E63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_METHOD_3_C4870D07F02B2E63_OFFSET))(a1, a2);
		}
	};
}
