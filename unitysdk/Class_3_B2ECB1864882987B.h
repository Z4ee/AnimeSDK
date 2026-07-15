#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ExitBreakState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2ECB1864882987B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176F2480)
#define CLASS_3_B2ECB1864882987B__CTOR_OFFSET UNITYSDK_OFFSET(0x176F2450)

inline static constexpr unsigned int Class_3_B2ECB1864882987B_TypeDefinitionIndex = 52538;

class Class_3_B2ECB1864882987B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ExitBreakState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitBreakState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitBreakState*))((::PBYTE)hIl2Cpp + CLASS_3_B2ECB1864882987B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2ECB1864882987B_ONTASKBEGIN_OFFSET))(this);
	}
};
