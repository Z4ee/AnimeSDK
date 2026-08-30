#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F3FD1A869251B57C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFC5C0)

inline static constexpr unsigned int Class_1_F3FD1A869251B57C_TypeDefinitionIndex = 57711;

class Class_1_F3FD1A869251B57C : public ::System::Object
{
public:
	::RPG::GameCore::UnitStatus LCFGGFKMJLF; // 0x10
	::System::UInt32 CEGOPEIKDLA; // 0x14
	::RPG::GameCore::UnitStatus NOBBBDBMLKE; // 0x18

	::System::Void _ctor(::RPG::GameCore::UnitStatus a1, ::RPG::GameCore::UnitStatus a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnitStatus, ::RPG::GameCore::UnitStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3FD1A869251B57C__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
