#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_METHOD_2_D9C5FC841D5742C5_OFFSET UNITYSDK_OFFSET(0x19805780)
#define RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198057C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConditionConfig_TypeDefinitionIndex = 18380;

	class GridFightRoleConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D9C5FC841D5742C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONDITIONCONFIG_METHOD_2_D9C5FC841D5742C5_OFFSET))(a1, a2);
		}
	};
}
