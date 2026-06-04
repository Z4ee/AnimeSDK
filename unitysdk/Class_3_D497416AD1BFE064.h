#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddHitByTimeRewindListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D497416AD1BFE064_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB93BE0)
#define CLASS_3_D497416AD1BFE064__CTOR_OFFSET UNITYSDK_OFFSET(0xAB93BB0)

inline static constexpr unsigned int Class_3_D497416AD1BFE064_TypeDefinitionIndex = 49854;

class Class_3_D497416AD1BFE064 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddHitByTimeRewindListener*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddHitByTimeRewindListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + CLASS_3_D497416AD1BFE064__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D497416AD1BFE064_ONTASKBEGIN_OFFSET))(this);
	}
};
