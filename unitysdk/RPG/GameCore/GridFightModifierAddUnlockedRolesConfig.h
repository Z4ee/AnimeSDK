#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DED47A4CD87A6E1_OFFSET UNITYSDK_OFFSET(0x189B1A70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_F68C002FCE2A9F08_OFFSET UNITYSDK_OFFSET(0x189B19A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B1A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddUnlockedRolesConfig_TypeDefinitionIndex = 18480;

	class GridFightModifierAddUnlockedRolesConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F68C002FCE2A9F08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_F68C002FCE2A9F08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DED47A4CD87A6E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DED47A4CD87A6E1_OFFSET))(a1, a2);
		}
	};
}
