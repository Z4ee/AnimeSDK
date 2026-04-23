#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA590090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopReplaceRole_TypeDefinitionIndex = 59875;

	class GridFightShopReplaceRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET))(this, info);
		}
	};
}
