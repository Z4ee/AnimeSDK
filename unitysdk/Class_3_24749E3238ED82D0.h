#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InsertBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_24749E3238ED82D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A3DA90)
#define CLASS_3_24749E3238ED82D0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3DA60)

inline static constexpr unsigned int Class_3_24749E3238ED82D0_TypeDefinitionIndex = 55598;

class Class_3_24749E3238ED82D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InsertBattlePerform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InsertBattlePerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InsertBattlePerform*))((::PBYTE)hIl2Cpp + CLASS_3_24749E3238ED82D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24749E3238ED82D0_ONTASKBEGIN_OFFSET))(this);
	}
};
