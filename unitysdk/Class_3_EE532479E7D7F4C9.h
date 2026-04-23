#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPlayerAddAttachment; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EE532479E7D7F4C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92F8B60)
#define CLASS_3_EE532479E7D7F4C9__CTOR_OFFSET UNITYSDK_OFFSET(0x92F8B30)

inline static constexpr unsigned int Class_3_EE532479E7D7F4C9_TypeDefinitionIndex = 48439;

class Class_3_EE532479E7D7F4C9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerAddAttachment*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + CLASS_3_EE532479E7D7F4C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE532479E7D7F4C9_ONTASKBEGIN_OFFSET))(this);
	}
};
