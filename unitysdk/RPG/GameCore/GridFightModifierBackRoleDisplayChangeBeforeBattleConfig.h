#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_METHOD_3_7BA8188D055077C6_OFFSET UNITYSDK_OFFSET(0x1C5D05C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_METHOD_3_7F33BF6BB0890062_OFFSET UNITYSDK_OFFSET(0x1C5D0610)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBackRoleDisplayChangeBeforeBattleConfig_TypeDefinitionIndex = 18738;

	class GridFightModifierBackRoleDisplayChangeBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7BA8188D055077C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_METHOD_3_7BA8188D055077C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7F33BF6BB0890062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_METHOD_3_7F33BF6BB0890062_OFFSET))(a1, a2);
		}
	};
}
