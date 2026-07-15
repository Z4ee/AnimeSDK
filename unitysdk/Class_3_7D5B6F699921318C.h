#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockTargetShield; }

#define CLASS_3_7D5B6F699921318C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15159A20)
#define CLASS_3_7D5B6F699921318C__CTOR_OFFSET UNITYSDK_OFFSET(0x151599F0)

inline static constexpr unsigned int Class_3_7D5B6F699921318C_TypeDefinitionIndex = 52659;

class Class_3_7D5B6F699921318C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnlockTargetShield*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockTargetShield* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockTargetShield*))((::PBYTE)hIl2Cpp + CLASS_3_7D5B6F699921318C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D5B6F699921318C_ONTASKBEGIN_OFFSET))(this);
	}
};
