#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEntityPosition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ECEA155DE0FACF13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B2F4C0)
#define CLASS_3_ECEA155DE0FACF13__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2F490)

inline static constexpr unsigned int Class_3_ECEA155DE0FACF13_TypeDefinitionIndex = 53968;

class Class_3_ECEA155DE0FACF13 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEntityPosition*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityPosition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityPosition*))((::PBYTE)hIl2Cpp + CLASS_3_ECEA155DE0FACF13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECEA155DE0FACF13_ONTASKBEGIN_OFFSET))(this);
	}
};
