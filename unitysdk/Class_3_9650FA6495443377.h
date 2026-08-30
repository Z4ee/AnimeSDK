#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMarbleAfterStreamingAction; }

#define CLASS_3_9650FA6495443377_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152D8A00)
#define CLASS_3_9650FA6495443377__CTOR_OFFSET UNITYSDK_OFFSET(0x152D89D0)

inline static constexpr unsigned int Class_3_9650FA6495443377_TypeDefinitionIndex = 52590;

class Class_3_9650FA6495443377 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerMarbleAfterStreamingAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMarbleAfterStreamingAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMarbleAfterStreamingAction*))((::PBYTE)hIl2Cpp + CLASS_3_9650FA6495443377__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9650FA6495443377_ONTASKBEGIN_OFFSET))(this);
	}
};
