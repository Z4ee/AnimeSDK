#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftCountingSet_1.h"

#define CLASS_2_A7B4C6BC12A02D9D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54DB40)

inline static constexpr unsigned int Class_2_A7B4C6BC12A02D9D_1_TypeDefinitionIndex = 41742;

class Class_2_A7B4C6BC12A02D9D_1 : public ::RPG::Client::MechCraft::MechCraftCountingSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B4C6BC12A02D9D_1__CTOR_OFFSET))(this);
	}
};
