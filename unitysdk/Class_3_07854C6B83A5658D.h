#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartySwitchEnvironment; }

#define CLASS_3_07854C6B83A5658D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCEBA510)
#define CLASS_3_07854C6B83A5658D__CTOR_OFFSET UNITYSDK_OFFSET(0xCEBA4E0)

inline static constexpr unsigned int Class_3_07854C6B83A5658D_TypeDefinitionIndex = 49926;

class Class_3_07854C6B83A5658D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TrainPartySwitchEnvironment*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartySwitchEnvironment* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartySwitchEnvironment*))((::PBYTE)hIl2Cpp + CLASS_3_07854C6B83A5658D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07854C6B83A5658D_ONTASKBEGIN_OFFSET))(this);
	}
};
