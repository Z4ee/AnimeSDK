#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPropCanBePlayerLock; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B2D29D9E77E3F853_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115C4BF0)
#define CLASS_3_B2D29D9E77E3F853__CTOR_OFFSET UNITYSDK_OFFSET(0x115C4BC0)

inline static constexpr unsigned int Class_3_B2D29D9E77E3F853_TypeDefinitionIndex = 43116;

class Class_3_B2D29D9E77E3F853 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPropCanBePlayerLock*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropCanBePlayerLock* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropCanBePlayerLock*))((::PBYTE)hIl2Cpp + CLASS_3_B2D29D9E77E3F853__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2D29D9E77E3F853_ONTASKBEGIN_OFFSET))(this);
	}
};
