#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x98E1350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeRoleModifier_TypeDefinitionIndex = 52795;

	class GridFightUpgradeRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEROLEMODIFIER__CTOR_OFFSET))(this, info);
		}
	};
}
