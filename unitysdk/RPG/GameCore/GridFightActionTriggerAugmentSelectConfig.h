#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_METHOD_6_2D678115EB2E4599_OFFSET UNITYSDK_OFFSET(0x1D95FBD0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_METHOD_6_63C11F937D8D0495_OFFSET UNITYSDK_OFFSET(0x1D960090)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95FBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerAugmentSelectConfig_TypeDefinitionIndex = 19079;

	class GridFightActionTriggerAugmentSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_63C11F937D8D0495(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_METHOD_6_63C11F937D8D0495_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2D678115EB2E4599(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionTriggerAugmentSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERAUGMENTSELECTCONFIG_METHOD_6_2D678115EB2E4599_OFFSET))(a1, a2);
		}
	};
}
