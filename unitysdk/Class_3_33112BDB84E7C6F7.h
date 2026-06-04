#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AbortInsertAbility; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_33112BDB84E7C6F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141E6BC0)
#define CLASS_3_33112BDB84E7C6F7__CTOR_OFFSET UNITYSDK_OFFSET(0x141E6B90)

inline static constexpr unsigned int Class_3_33112BDB84E7C6F7_TypeDefinitionIndex = 51222;

class Class_3_33112BDB84E7C6F7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AbortInsertAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AbortInsertAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AbortInsertAbility*))((::PBYTE)hIl2Cpp + CLASS_3_33112BDB84E7C6F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33112BDB84E7C6F7_ONTASKBEGIN_OFFSET))(this);
	}
};
