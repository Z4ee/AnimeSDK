#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockTargetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_88B92A3A2100C879_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96A0A90)
#define CLASS_3_88B92A3A2100C879__CTOR_OFFSET UNITYSDK_OFFSET(0x96A0A60)

inline static constexpr unsigned int Class_3_88B92A3A2100C879_TypeDefinitionIndex = 50844;

class Class_3_88B92A3A2100C879 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockTargetActionDelay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockTargetActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockTargetActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_88B92A3A2100C879__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_88B92A3A2100C879_ONTASKBEGIN_OFFSET))(this);
	}
};
