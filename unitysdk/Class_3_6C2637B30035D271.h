#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsInPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6C2637B30035D271_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13514F60)
#define CLASS_3_6C2637B30035D271__CTOR_OFFSET UNITYSDK_OFFSET(0x13514F30)

inline static constexpr unsigned int Class_3_6C2637B30035D271_TypeDefinitionIndex = 54678;

class Class_3_6C2637B30035D271 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureByIsInPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + CLASS_3_6C2637B30035D271__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C2637B30035D271_ONTASKBEGIN_OFFSET))(this);
	}
};
