#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_61238D078BCBBECC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAAF600)
#define CLASS_1_61238D078BCBBECC__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAF5B0)

inline static constexpr unsigned int Class_1_61238D078BCBBECC_TypeDefinitionIndex = 50293;

class Class_1_61238D078BCBBECC : public ::System::Object
{
public:
	::RPG::GameCore::RtAttackData* Field_1_0; // 0x10
	::RPG::GameCore::AttackDamageType Field_1_1; // 0x18
	::RPG::GameCore::AttackDamageType Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_61238D078BCBBECC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61238D078BCBBECC_DISPOSE_OFFSET))(this);
	}
};
