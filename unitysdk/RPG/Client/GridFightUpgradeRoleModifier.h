#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1EB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeRoleModifier_TypeDefinitionIndex = 65071;

	class GridFightUpgradeRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER__CTOR_OFFSET))(this, a1);
		}
	};
}
