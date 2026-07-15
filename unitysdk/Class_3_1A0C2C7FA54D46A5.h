#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetModelDynamicLoadPriority; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1A0C2C7FA54D46A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4FC630)
#define CLASS_3_1A0C2C7FA54D46A5__CTOR_OFFSET UNITYSDK_OFFSET(0xE4FC600)

inline static constexpr unsigned int Class_3_1A0C2C7FA54D46A5_TypeDefinitionIndex = 55962;

class Class_3_1A0C2C7FA54D46A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetModelDynamicLoadPriority*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + CLASS_3_1A0C2C7FA54D46A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A0C2C7FA54D46A5_ONTASKBEGIN_OFFSET))(this);
	}
};
