#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_2A66BE7F8B196C22_OFFSET UNITYSDK_OFFSET(0x189C8810)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_6EBE4E3E436F2C4C_OFFSET UNITYSDK_OFFSET(0x189C8560)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C86E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamIsEquipPreBattleConfig_TypeDefinitionIndex = 18529;

	class GridFightParamIsEquipPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6EBE4E3E436F2C4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_6EBE4E3E436F2C4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2A66BE7F8B196C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_2A66BE7F8B196C22_OFFSET))(a1, a2);
		}
	};
}
