#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_E591DF54310AABF5_1;

#define RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1EC6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecycleRoleModifier_TypeDefinitionIndex = 65010;

	class GridFightRecycleRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET))(this, a1);
		}
	};
}
