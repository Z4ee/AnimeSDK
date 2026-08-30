#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9EC7A3949007E029__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0DC80)

inline static constexpr unsigned int Class_1_9EC7A3949007E029_TypeDefinitionIndex = 40518;

class Class_1_9EC7A3949007E029 : public ::System::Object
{
public:
	::System::Boolean CDFLBJGENDB; // 0x10
	::System::UInt32 LLDCHLHNADA; // 0x14
	::System::UInt32 FDOELDMEBPE; // 0x18
	::RPG::GameCore::ElfWaiterState EMNBFHECDPG; // 0x1C
	::System::Int32 MGKKICFOJFA; // 0x20
	::RPG::GameCore::RestaurantEmployeeType BDOOPGOGLOG; // 0x24
	::System::UInt32 DFEJABODPGM; // 0x28
	::System::Int32 LIFCCHHKLGP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC7A3949007E029__CTOR_OFFSET))(this);
	}
};
