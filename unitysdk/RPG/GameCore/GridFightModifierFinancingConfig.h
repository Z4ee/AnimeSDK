#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_METHOD_3_A7AC6934F5BB9981_OFFSET UNITYSDK_OFFSET(0x1D069C10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_METHOD_3_F284E07EF6AC16E5_OFFSET UNITYSDK_OFFSET(0x1D069C60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFinancingConfig_TypeDefinitionIndex = 18743;

	class GridFightModifierFinancingConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7AC6934F5BB9981(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFinancingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFinancingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_METHOD_3_A7AC6934F5BB9981_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F284E07EF6AC16E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierFinancingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierFinancingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_METHOD_3_F284E07EF6AC16E5_OFFSET))(a1, a2);
		}
	};
}
