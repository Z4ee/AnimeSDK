#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialHideNodes; }

#define CLASS_3_80E382D4C195133D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15660660)
#define CLASS_3_80E382D4C195133D__CTOR_OFFSET UNITYSDK_OFFSET(0x15660630)

inline static constexpr unsigned int Class_3_80E382D4C195133D_TypeDefinitionIndex = 56189;

class Class_3_80E382D4C195133D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialHideNodes*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialHideNodes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialHideNodes*))((::PBYTE)hIl2Cpp + CLASS_3_80E382D4C195133D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80E382D4C195133D_ONTASKBEGIN_OFFSET))(this);
	}
};
