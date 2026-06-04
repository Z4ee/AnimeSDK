#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_E3D34E6ECB8C8175_OFFSET UNITYSDK_OFFSET(0x197E80F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_F7660760C49C86AC_OFFSET UNITYSDK_OFFSET(0x197E81C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E8170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddDropByMonsterIdConfig_TypeDefinitionIndex = 18368;

	class GridFightModifierAddDropByMonsterIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3D34E6ECB8C8175(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_E3D34E6ECB8C8175_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F7660760C49C86AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddDropByMonsterIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDDROPBYMONSTERIDCONFIG_METHOD_3_F7660760C49C86AC_OFFSET))(a1, a2);
		}
	};
}
