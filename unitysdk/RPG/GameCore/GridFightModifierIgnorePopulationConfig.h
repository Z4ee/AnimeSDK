#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_METHOD_3_484BE7FCFEEA2247_OFFSET UNITYSDK_OFFSET(0x1D06A150)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_METHOD_3_9ACDEB82B3CC8AEB_OFFSET UNITYSDK_OFFSET(0x1D06A1A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierIgnorePopulationConfig_TypeDefinitionIndex = 18724;

	class GridFightModifierIgnorePopulationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_484BE7FCFEEA2247(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_METHOD_3_484BE7FCFEEA2247_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ACDEB82B3CC8AEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_METHOD_3_9ACDEB82B3CC8AEB_OFFSET))(a1, a2);
		}
	};
}
