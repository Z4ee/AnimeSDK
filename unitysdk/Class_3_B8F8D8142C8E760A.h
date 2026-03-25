#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CancelActionDelayLink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B8F8D8142C8E760A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x104B9020)
#define CLASS_3_B8F8D8142C8E760A__CTOR_OFFSET UNITYSDK_OFFSET(0x104B8FF0)

inline static constexpr unsigned int Class_3_B8F8D8142C8E760A_TypeDefinitionIndex = 43947;

class Class_3_B8F8D8142C8E760A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CancelActionDelayLink*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CancelActionDelayLink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CancelActionDelayLink*))((::PBYTE)hIl2Cpp + CLASS_3_B8F8D8142C8E760A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8F8D8142C8E760A_ONTASKBEGIN_OFFSET))(this);
	}
};
