#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_61D80A48351BD7E6_OFFSET UNITYSDK_OFFSET(0x189BFF50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_EE3210C5FBA95C5F_OFFSET UNITYSDK_OFFSET(0x189C0020)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BFFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSkipBattleConfig_TypeDefinitionIndex = 18510;

	class GridFightModifierSkipBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61D80A48351BD7E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_61D80A48351BD7E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE3210C5FBA95C5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_EE3210C5FBA95C5F_OFFSET))(a1, a2);
		}
	};
}
