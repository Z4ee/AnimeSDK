#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetUpTrainVisitorDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_94004D82E327560B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115BF5F0)
#define CLASS_3_94004D82E327560B__CTOR_OFFSET UNITYSDK_OFFSET(0x115BF5C0)

inline static constexpr unsigned int Class_3_94004D82E327560B_TypeDefinitionIndex = 43123;

class Class_3_94004D82E327560B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetUpTrainVisitorDialogue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpTrainVisitorDialogue*))((::PBYTE)hIl2Cpp + CLASS_3_94004D82E327560B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94004D82E327560B_ONTASKBEGIN_OFFSET))(this);
	}
};
