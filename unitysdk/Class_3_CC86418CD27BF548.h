#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTimeRewindEntityActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CC86418CD27BF548_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CEBD90)
#define CLASS_3_CC86418CD27BF548__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEBD60)

inline static constexpr unsigned int Class_3_CC86418CD27BF548_TypeDefinitionIndex = 53649;

class Class_3_CC86418CD27BF548 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTimeRewindEntityActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimeRewindEntityActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimeRewindEntityActive*))((::PBYTE)hIl2Cpp + CLASS_3_CC86418CD27BF548__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC86418CD27BF548_ONTASKBEGIN_OFFSET))(this);
	}
};
