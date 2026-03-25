#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvClientChangePropState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61DD8BA0FB1908C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AC09E0)
#define CLASS_3_61DD8BA0FB1908C3__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC09B0)

inline static constexpr unsigned int Class_3_61DD8BA0FB1908C3_TypeDefinitionIndex = 42358;

class Class_3_61DD8BA0FB1908C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvClientChangePropState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvClientChangePropState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvClientChangePropState*))((::PBYTE)hIl2Cpp + CLASS_3_61DD8BA0FB1908C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61DD8BA0FB1908C3_ONTASKBEGIN_OFFSET))(this);
	}
};
