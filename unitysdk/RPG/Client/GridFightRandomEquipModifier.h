#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA569520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRandomEquipModifier_TypeDefinitionIndex = 59850;

	class GridFightRandomEquipModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRANDOMEQUIPMODIFIER__CTOR_OFFSET))(this, info);
		}
	};
}
