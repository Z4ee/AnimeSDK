#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD325880)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopReplaceRole_TypeDefinitionIndex = 65088;

	class GridFightShopReplaceRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET))(this, a1);
		}
	};
}
