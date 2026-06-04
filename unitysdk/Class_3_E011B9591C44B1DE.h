#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTimeRewindEntityMinRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E011B9591C44B1DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB781610)
#define CLASS_3_E011B9591C44B1DE__CTOR_OFFSET UNITYSDK_OFFSET(0xB7815E0)

inline static constexpr unsigned int Class_3_E011B9591C44B1DE_TypeDefinitionIndex = 49891;

class Class_3_E011B9591C44B1DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTimeRewindEntityMinRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityMinRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityMinRatio*))((::PBYTE)hIl2Cpp + CLASS_3_E011B9591C44B1DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E011B9591C44B1DE_ONTASKBEGIN_OFFSET))(this);
	}
};
