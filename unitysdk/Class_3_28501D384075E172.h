#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetDirMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_28501D384075E172_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161F03C0)
#define CLASS_3_28501D384075E172__CTOR_OFFSET UNITYSDK_OFFSET(0x161F0390)

inline static constexpr unsigned int Class_3_28501D384075E172_TypeDefinitionIndex = 58731;

class Class_3_28501D384075E172 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetDirMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDirMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDirMove*))((::PBYTE)hIl2Cpp + CLASS_3_28501D384075E172__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28501D384075E172_ONTASKBEGIN_OFFSET))(this);
	}
};
