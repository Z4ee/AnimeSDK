#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }

#define CLASS_1_5E8D52132353525B_METHOD_1_CDEFC3BCD02C3E59_OFFSET UNITYSDK_OFFSET(0xCEC23D0)
#define CLASS_1_5E8D52132353525B__CTOR_OFFSET UNITYSDK_OFFSET(0xCEC23C0)

inline static constexpr unsigned int Class_1_5E8D52132353525B_TypeDefinitionIndex = 60755;

class Class_1_5E8D52132353525B : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightEquipData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_CDEFC3BCD02C3E59()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B_METHOD_1_CDEFC3BCD02C3E59_OFFSET))(this);
	}
};
