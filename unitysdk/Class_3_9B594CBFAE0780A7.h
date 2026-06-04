#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ProcessModifierLifeStep; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9B594CBFAE0780A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13D06030)
#define CLASS_3_9B594CBFAE0780A7__CTOR_OFFSET UNITYSDK_OFFSET(0x13D06000)

inline static constexpr unsigned int Class_3_9B594CBFAE0780A7_TypeDefinitionIndex = 51622;

class Class_3_9B594CBFAE0780A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ProcessModifierLifeStep*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ProcessModifierLifeStep* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ProcessModifierLifeStep*))((::PBYTE)hIl2Cpp + CLASS_3_9B594CBFAE0780A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B594CBFAE0780A7_ONTASKBEGIN_OFFSET))(this);
	}
};
