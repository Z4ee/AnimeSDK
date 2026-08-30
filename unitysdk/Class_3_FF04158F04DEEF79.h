#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearEntityFloatMessage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF04158F04DEEF79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A936B0)
#define CLASS_3_FF04158F04DEEF79__CTOR_OFFSET UNITYSDK_OFFSET(0x19A93680)

inline static constexpr unsigned int Class_3_FF04158F04DEEF79_TypeDefinitionIndex = 55169;

class Class_3_FF04158F04DEEF79 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearEntityFloatMessage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + CLASS_3_FF04158F04DEEF79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF04158F04DEEF79_ONTASKBEGIN_OFFSET))(this);
	}
};
