#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockTargetHP; }

#define CLASS_3_94EC332648CE90EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105B6250)
#define CLASS_3_94EC332648CE90EE__CTOR_OFFSET UNITYSDK_OFFSET(0x105B6220)

inline static constexpr unsigned int Class_3_94EC332648CE90EE_TypeDefinitionIndex = 55981;

class Class_3_94EC332648CE90EE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnlockTargetHP*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockTargetHP* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockTargetHP*))((::PBYTE)hIl2Cpp + CLASS_3_94EC332648CE90EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94EC332648CE90EE_ONTASKBEGIN_OFFSET))(this);
	}
};
