#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_3DCAAB01FB367C85_OFFSET UNITYSDK_OFFSET(0x189A0670)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_4FF21F4FF0228716_OFFSET UNITYSDK_OFFSET(0x1899FB70)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899FAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRemoveRoleConfig_TypeDefinitionIndex = 18348;

	class GridFightActionRemoveRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_3DCAAB01FB367C85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_3DCAAB01FB367C85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4FF21F4FF0228716(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_4FF21F4FF0228716_OFFSET))(a1, a2);
		}
	};
}
