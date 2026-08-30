#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_METHOD_3_4AB67D9C5937C944_OFFSET UNITYSDK_OFFSET(0x1EE6EA20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_METHOD_3_76CD764655BD5600_OFFSET UNITYSDK_OFFSET(0x1EE6EA70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6EA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierReplaceStageNodeConfig_TypeDefinitionIndex = 19204;

	class GridFightModifierReplaceStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AB67D9C5937C944(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_METHOD_3_4AB67D9C5937C944_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76CD764655BD5600(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierReplaceStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESTAGENODECONFIG_METHOD_3_76CD764655BD5600_OFFSET))(a1, a2);
		}
	};
}
