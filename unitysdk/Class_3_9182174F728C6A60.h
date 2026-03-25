#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveHitByTimeRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9182174F728C6A60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D96AC0)
#define CLASS_3_9182174F728C6A60__CTOR_OFFSET UNITYSDK_OFFSET(0x8D96A90)

inline static constexpr unsigned int Class_3_9182174F728C6A60_TypeDefinitionIndex = 43219;

class Class_3_9182174F728C6A60 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveHitByTimeRewindListener*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + CLASS_3_9182174F728C6A60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9182174F728C6A60_ONTASKBEGIN_OFFSET))(this);
	}
};
