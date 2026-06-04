#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD6860)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRandomEquipModifier_TypeDefinitionIndex = 60785;

	class GridFightRandomEquipModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER__CTOR_OFFSET))(this, a1);
		}
	};
}
