#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD77E10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopReplaceRole_TypeDefinitionIndex = 62104;

	class GridFightShopReplaceRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPREPLACEROLE__CTOR_OFFSET))(this, a1);
		}
	};
}
