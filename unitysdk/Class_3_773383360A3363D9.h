#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetColliderLayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_773383360A3363D9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18466980)
#define CLASS_3_773383360A3363D9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184669C0)
#define CLASS_3_773383360A3363D9__CTOR_OFFSET UNITYSDK_OFFSET(0x18466950)

inline static constexpr unsigned int Class_3_773383360A3363D9_TypeDefinitionIndex = 50829;

class Class_3_773383360A3363D9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetColliderLayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetColliderLayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetColliderLayer*))((::PBYTE)hIl2Cpp + CLASS_3_773383360A3363D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_773383360A3363D9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_773383360A3363D9_ONTASKBEGIN_OFFSET))(this);
	}
};
