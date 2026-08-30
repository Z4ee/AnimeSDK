#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_577BB481E91BF7DB_OFFSET UNITYSDK_OFFSET(0x1EE6F3E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_EE3210C5FBA95C5F_OFFSET UNITYSDK_OFFSET(0x1EE6F430)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6F420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSkipBattleConfig_TypeDefinitionIndex = 19257;

	class GridFightModifierSkipBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_577BB481E91BF7DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_577BB481E91BF7DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE3210C5FBA95C5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSkipBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSkipBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSKIPBATTLECONFIG_METHOD_3_EE3210C5FBA95C5F_OFFSET))(a1, a2);
		}
	};
}
