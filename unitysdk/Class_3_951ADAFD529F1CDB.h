#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetResilience; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_951ADAFD529F1CDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158A71C0)
#define CLASS_3_951ADAFD529F1CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x158A7190)

inline static constexpr unsigned int Class_3_951ADAFD529F1CDB_TypeDefinitionIndex = 53371;

class Class_3_951ADAFD529F1CDB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetResilience*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetResilience* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetResilience*))((::PBYTE)hIl2Cpp + CLASS_3_951ADAFD529F1CDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_951ADAFD529F1CDB_ONTASKBEGIN_OFFSET))(this);
	}
};
