#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_4FF21F4FF0228716_OFFSET UNITYSDK_OFFSET(0x1D149F20)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_BB2905FE449FD0BA_OFFSET UNITYSDK_OFFSET(0x1D14A2E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRemoveRoleConfig_TypeDefinitionIndex = 19082;

	class GridFightActionRemoveRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BB2905FE449FD0BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_BB2905FE449FD0BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4FF21F4FF0228716(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_6_4FF21F4FF0228716_OFFSET))(a1, a2);
		}
	};
}
