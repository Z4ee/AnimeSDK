#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/System/Object.h"

class Class_1_92178DBBCC977AF4;

#define CLASS_1_C563E5E77DCDB6EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51F730)

inline static constexpr unsigned int Class_1_C563E5E77DCDB6EB_TypeDefinitionIndex = 40360;

class Class_1_C563E5E77DCDB6EB : public ::System::Object
{
public:
	::Class_1_92178DBBCC977AF4* HOGDPCJANEK; // 0x10
	::System::UInt32 FJPBONGDHLF; // 0x18
	::RPG::Client::LittleGame::ChimeraDuelSettleReason JEHOMBANNLM; // 0x1C
	::System::UInt32 HCDNAPNIAJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C563E5E77DCDB6EB__CTOR_OFFSET))(this);
	}
};
