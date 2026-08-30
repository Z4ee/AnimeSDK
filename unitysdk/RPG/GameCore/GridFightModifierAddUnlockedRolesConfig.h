#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DED47A4CD87A6E1_OFFSET UNITYSDK_OFFSET(0x1D1585B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DF552E036B123BD_OFFSET UNITYSDK_OFFSET(0x1D158560)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1585A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddUnlockedRolesConfig_TypeDefinitionIndex = 19225;

	class GridFightModifierAddUnlockedRolesConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DF552E036B123BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DF552E036B123BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DED47A4CD87A6E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddUnlockedRolesConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDUNLOCKEDROLESCONFIG_METHOD_3_9DED47A4CD87A6E1_OFFSET))(a1, a2);
		}
	};
}
