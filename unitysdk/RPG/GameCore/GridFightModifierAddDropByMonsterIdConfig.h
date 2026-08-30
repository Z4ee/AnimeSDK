#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_68545FC717BE60B0_OFFSET UNITYSDK_OFFSET(0x1EE6C030)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_F7660760C49C86AC_OFFSET UNITYSDK_OFFSET(0x1EE6C080)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddDropByMonsterIdConfig_TypeDefinitionIndex = 19138;

	class GridFightModifierAddDropByMonsterIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68545FC717BE60B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_68545FC717BE60B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7660760C49C86AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_F7660760C49C86AC_OFFSET))(a1, a2);
		}
	};
}
