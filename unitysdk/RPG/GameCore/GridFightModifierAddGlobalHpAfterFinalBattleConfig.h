#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_METHOD_3_32682D53ADF65484_OFFSET UNITYSDK_OFFSET(0x189B0AB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_METHOD_3_C373E48B0301E10D_OFFSET UNITYSDK_OFFSET(0x189B09E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddGlobalHpAfterFinalBattleConfig_TypeDefinitionIndex = 18415;

	class GridFightModifierAddGlobalHpAfterFinalBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C373E48B0301E10D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_METHOD_3_C373E48B0301E10D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32682D53ADF65484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterFinalBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERFINALBATTLECONFIG_METHOD_3_32682D53ADF65484_OFFSET))(a1, a2);
		}
	};
}
