#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MarkTargetForFutureReviveAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C595530C21E9D2C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AE71C0)
#define CLASS_3_C595530C21E9D2C1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE7190)

inline static constexpr unsigned int Class_3_C595530C21E9D2C1_TypeDefinitionIndex = 52676;

class Class_3_C595530C21E9D2C1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MarkTargetForFutureReviveAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*))((::PBYTE)hIl2Cpp + CLASS_3_C595530C21E9D2C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C595530C21E9D2C1_ONTASKBEGIN_OFFSET))(this);
	}
};
