#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetAlwaysAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_60AB38FC92159DE0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA766DF0)
#define CLASS_3_60AB38FC92159DE0__CTOR_OFFSET UNITYSDK_OFFSET(0xA766DC0)

inline static constexpr unsigned int Class_3_60AB38FC92159DE0_TypeDefinitionIndex = 51906;

class Class_3_60AB38FC92159DE0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetAlwaysAutoBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAlwaysAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAlwaysAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_60AB38FC92159DE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60AB38FC92159DE0_ONTASKBEGIN_OFFSET))(this);
	}
};
