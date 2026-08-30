#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_2A66BE7F8B196C22_OFFSET UNITYSDK_OFFSET(0x1D15DED0)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_F217FDAE60E0FF86_OFFSET UNITYSDK_OFFSET(0x1D15DE80)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamIsEquipPreBattleConfig_TypeDefinitionIndex = 19285;

	class GridFightParamIsEquipPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F217FDAE60E0FF86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_F217FDAE60E0FF86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2A66BE7F8B196C22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_6_2A66BE7F8B196C22_OFFSET))(a1, a2);
		}
	};
}
