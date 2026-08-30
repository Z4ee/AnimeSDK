#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleTargetStatus.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2844F7605321929E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78CDB0)

inline static constexpr unsigned int Class_1_2844F7605321929E_TypeDefinitionIndex = 71963;

class Class_1_2844F7605321929E : public ::System::Object
{
public:
	::RPG::Client::BattleTargetStatus FFEPLIHOFLA; // 0x10
	::System::UInt32 GFBJJGIKPCB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2844F7605321929E__CTOR_OFFSET))(this);
	}
};
