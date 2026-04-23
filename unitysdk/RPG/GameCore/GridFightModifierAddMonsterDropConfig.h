#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_70901E7570EBC581_OFFSET UNITYSDK_OFFSET(0x189B0E40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_C30A30F292E33758_OFFSET UNITYSDK_OFFSET(0x189B0F10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B0EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMonsterDropConfig_TypeDefinitionIndex = 18395;

	class GridFightModifierAddMonsterDropConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70901E7570EBC581(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_70901E7570EBC581_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C30A30F292E33758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_C30A30F292E33758_OFFSET))(a1, a2);
		}
	};
}
