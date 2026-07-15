#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_B6DDD2FDEC7AE81C_OFFSET UNITYSDK_OFFSET(0x1C5CFF10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_C30A30F292E33758_OFFSET UNITYSDK_OFFSET(0x1C5CFF60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CFF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMonsterDropConfig_TypeDefinitionIndex = 18612;

	class GridFightModifierAddMonsterDropConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6DDD2FDEC7AE81C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_B6DDD2FDEC7AE81C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C30A30F292E33758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPCONFIG_METHOD_3_C30A30F292E33758_OFFSET))(a1, a2);
		}
	};
}
