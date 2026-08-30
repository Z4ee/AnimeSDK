#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleGridFightEquipData; }

#define CLASS_1_5E8D52132353525B_METHOD_1_077562104BB0E728_OFFSET UNITYSDK_OFFSET(0xE5CD690)
#define CLASS_1_5E8D52132353525B__CTOR_OFFSET UNITYSDK_OFFSET(0xE5CD680)

inline static constexpr unsigned int Class_1_5E8D52132353525B_TypeDefinitionIndex = 65031;

class Class_1_5E8D52132353525B : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightEquipData* HNNBFLIHGJG; // 0x10

	::System::Void _ctor(::RPG::GameCore::BattleGridFightEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_077562104BB0E728()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E8D52132353525B_METHOD_1_077562104BB0E728_OFFSET))(this);
	}
};
