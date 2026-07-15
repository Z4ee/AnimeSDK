#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopWindowStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D6EDA2E627088286_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17531E60)
#define CLASS_3_D6EDA2E627088286__CTOR_OFFSET UNITYSDK_OFFSET(0x17531E30)

inline static constexpr unsigned int Class_3_D6EDA2E627088286_TypeDefinitionIndex = 50499;

class Class_3_D6EDA2E627088286 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopWindowStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopWindowStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopWindowStage*))((::PBYTE)hIl2Cpp + CLASS_3_D6EDA2E627088286__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6EDA2E627088286_ONTASKBEGIN_OFFSET))(this);
	}
};
