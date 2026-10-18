#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftCountingSet_1.h"

#define CLASS_2_A7B4C6BC12A02D9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C520F00)

inline static constexpr unsigned int Class_2_A7B4C6BC12A02D9D_TypeDefinitionIndex = 41732;

class Class_2_A7B4C6BC12A02D9D : public ::RPG::Client::MechCraft::MechCraftCountingSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7B4C6BC12A02D9D__CTOR_OFFSET))(this);
	}
};
