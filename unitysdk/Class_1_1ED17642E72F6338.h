#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1ED17642E72F6338__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE8240)

inline static constexpr unsigned int Class_1_1ED17642E72F6338_TypeDefinitionIndex = 57491;

class Class_1_1ED17642E72F6338 : public ::System::Object
{
public:
	::RPG::GameCore::NPCStatus NOBBBDBMLKE; // 0x10
	::System::UInt32 CEGOPEIKDLA; // 0x14
	::RPG::GameCore::NPCStatus LCFGGFKMJLF; // 0x18

	::System::Void _ctor(::RPG::GameCore::NPCStatus a1, ::RPG::GameCore::NPCStatus a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1ED17642E72F6338__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
