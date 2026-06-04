#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class InterruptSkillExecution; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9F7C94B9267792BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B57710)
#define CLASS_3_9F7C94B9267792BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B577A0)
#define CLASS_3_9F7C94B9267792BE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B57600)
#define CLASS_3_9F7C94B9267792BE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B57850)

inline static constexpr unsigned int Class_3_9F7C94B9267792BE_TypeDefinitionIndex = 51496;

class Class_3_9F7C94B9267792BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InterruptSkillExecution*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + CLASS_3_9F7C94B9267792BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F7C94B9267792BE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F7C94B9267792BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F7C94B9267792BE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
