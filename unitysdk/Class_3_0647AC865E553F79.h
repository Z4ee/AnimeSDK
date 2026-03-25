#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddReShaEasterEggProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0647AC865E553F79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8933030)
#define CLASS_3_0647AC865E553F79__CTOR_OFFSET UNITYSDK_OFFSET(0x8933000)

inline static constexpr unsigned int Class_3_0647AC865E553F79_TypeDefinitionIndex = 42341;

class Class_3_0647AC865E553F79 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddReShaEasterEggProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaEasterEggProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaEasterEggProp*))((::PBYTE)hIl2Cpp + CLASS_3_0647AC865E553F79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0647AC865E553F79_ONTASKBEGIN_OFFSET))(this);
	}
};
