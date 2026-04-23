#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA569B30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecycleRoleModifier_TypeDefinitionIndex = 59857;

	class GridFightRecycleRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET))(this, info);
		}
	};
}
