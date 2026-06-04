#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddTargetStancePreshowConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3886A2773C34CA7B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD1E500)
#define CLASS_3_3886A2773C34CA7B__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1E4D0)

inline static constexpr unsigned int Class_3_3886A2773C34CA7B_TypeDefinitionIndex = 51251;

class Class_3_3886A2773C34CA7B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddTargetStancePreshowConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTargetStancePreshowConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTargetStancePreshowConfig*))((::PBYTE)hIl2Cpp + CLASS_3_3886A2773C34CA7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3886A2773C34CA7B_ONTASKBEGIN_OFFSET))(this);
	}
};
