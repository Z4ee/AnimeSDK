#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddTimelineEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E797A205CF425D3A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146032C0)
#define CLASS_3_E797A205CF425D3A__CTOR_OFFSET UNITYSDK_OFFSET(0x14603290)

inline static constexpr unsigned int Class_3_E797A205CF425D3A_TypeDefinitionIndex = 49857;

class Class_3_E797A205CF425D3A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddTimelineEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E797A205CF425D3A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E797A205CF425D3A_ONTASKBEGIN_OFFSET))(this);
	}
};
