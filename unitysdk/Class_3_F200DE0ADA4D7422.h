#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartWindowStage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F200DE0ADA4D7422_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA4A830)
#define CLASS_3_F200DE0ADA4D7422__CTOR_OFFSET UNITYSDK_OFFSET(0xBA4A800)

inline static constexpr unsigned int Class_3_F200DE0ADA4D7422_TypeDefinitionIndex = 53166;

class Class_3_F200DE0ADA4D7422 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartWindowStage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartWindowStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartWindowStage*))((::PBYTE)hIl2Cpp + CLASS_3_F200DE0ADA4D7422__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F200DE0ADA4D7422_ONTASKBEGIN_OFFSET))(this);
	}
};
