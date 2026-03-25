#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }

#define CLASS_1_5E8D52132353525B_METHOD_1_90E43FA5DACE37BA_OFFSET UNITYSDK_OFFSET(0x10A236A0)
#define CLASS_1_5E8D52132353525B__CTOR_OFFSET UNITYSDK_OFFSET(0x10A23690)

inline static constexpr unsigned int Class_1_5E8D52132353525B_TypeDefinitionIndex = 52758;

class Class_1_5E8D52132353525B : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightEquipData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_90E43FA5DACE37BA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B_METHOD_1_90E43FA5DACE37BA_OFFSET))(this);
	}
};
