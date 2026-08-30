#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_306CBF67F25314F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11EF0330)
#define CLASS_3_306CBF67F25314F9__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF0250)

inline static constexpr unsigned int Class_3_306CBF67F25314F9_TypeDefinitionIndex = 55651;

class Class_3_306CBF67F25314F9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByProperty*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + CLASS_3_306CBF67F25314F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_306CBF67F25314F9_ONTASKBEGIN_OFFSET))(this);
	}
};
