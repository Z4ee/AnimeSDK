#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMusicRhythmSongID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_918440CFC01C02F5_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12A9CDE0)
#define CLASS_3_918440CFC01C02F5__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9CDB0)

inline static constexpr unsigned int Class_3_918440CFC01C02F5_TypeDefinitionIndex = 50993;

class Class_3_918440CFC01C02F5 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMusicRhythmSongID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + CLASS_3_918440CFC01C02F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918440CFC01C02F5_EVALUATE_OFFSET))(this);
	}
};
