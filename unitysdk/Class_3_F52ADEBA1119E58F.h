#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetUpTrainVisitorBubble; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F52ADEBA1119E58F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x121E1570)
#define CLASS_3_F52ADEBA1119E58F__CTOR_OFFSET UNITYSDK_OFFSET(0x121E1540)

inline static constexpr unsigned int Class_3_F52ADEBA1119E58F_TypeDefinitionIndex = 53516;

class Class_3_F52ADEBA1119E58F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetUpTrainVisitorBubble*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpTrainVisitorBubble* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpTrainVisitorBubble*))((::PBYTE)hIl2Cpp + CLASS_3_F52ADEBA1119E58F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F52ADEBA1119E58F_ONTASKBEGIN_OFFSET))(this);
	}
};
