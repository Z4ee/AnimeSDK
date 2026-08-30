#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_6_A8A6B2692107C8B7_OFFSET UNITYSDK_OFFSET(0x1D149E60)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_6_EE6B2E6DB50AC473_OFFSET UNITYSDK_OFFSET(0x1D14A110)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostAllFreeRefreshConfig_TypeDefinitionIndex = 19093;

	class GridFightActionCostAllFreeRefreshConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EE6B2E6DB50AC473(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_6_EE6B2E6DB50AC473_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A8A6B2692107C8B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_6_A8A6B2692107C8B7_OFFSET))(a1, a2);
		}
	};
}
