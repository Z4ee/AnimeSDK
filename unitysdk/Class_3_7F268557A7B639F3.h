#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class BoomRobotGameplayBoomStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7F268557A7B639F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1525D020)
#define CLASS_3_7F268557A7B639F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1525CFF0)

inline static constexpr unsigned int Class_3_7F268557A7B639F3_TypeDefinitionIndex = 52816;

class Class_3_7F268557A7B639F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::BoomRobotGameplayBoomStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BoomRobotGameplayBoomStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BoomRobotGameplayBoomStart*))((::PBYTE)hIl2Cpp + CLASS_3_7F268557A7B639F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F268557A7B639F3_ONTASKBEGIN_OFFSET))(this);
	}
};
