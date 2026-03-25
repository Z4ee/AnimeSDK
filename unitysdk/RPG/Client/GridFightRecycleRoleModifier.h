#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_F0A446EC7AE7E87D_1;

#define RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x988B730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecycleRoleModifier_TypeDefinitionIndex = 52794;

	class GridFightRecycleRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET))(this, info);
		}
	};
}
