#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }

#define FRAMEENDREFRESHMANAGER_QUEUEDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

inline static constexpr unsigned int FrameEndRefreshManager_QueuedAction_TypeDefinitionIndex = 77542;

struct alignas(8) FrameEndRefreshManager_QueuedAction
{
	::System::Object* Owner; // 0x10
	::System::Action* Body; // 0x18

	::System::Void _ctor(::System::Object* owner, ::System::Action* body)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + FRAMEENDREFRESHMANAGER_QUEUEDACTION__CTOR_OFFSET))(this, owner, body);
	}
};
