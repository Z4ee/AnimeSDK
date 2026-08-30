#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTimelineEntityState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BB31EFBB1F03CDCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x191644C0)
#define CLASS_3_BB31EFBB1F03CDCA__CTOR_OFFSET UNITYSDK_OFFSET(0x19164490)

inline static constexpr unsigned int Class_3_BB31EFBB1F03CDCA_TypeDefinitionIndex = 53653;

class Class_3_BB31EFBB1F03CDCA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTimelineEntityState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTimelineEntityState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTimelineEntityState*))((::PBYTE)hIl2Cpp + CLASS_3_BB31EFBB1F03CDCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB31EFBB1F03CDCA_ONTASKBEGIN_OFFSET))(this);
	}
};
