#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupFreeStyleSupport; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A5D0011648361169_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F8EB00)
#define CLASS_3_A5D0011648361169__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8EAD0)

inline static constexpr unsigned int Class_3_A5D0011648361169_TypeDefinitionIndex = 55434;

class Class_3_A5D0011648361169 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupFreeStyleSupport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupFreeStyleSupport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupFreeStyleSupport*))((::PBYTE)hIl2Cpp + CLASS_3_A5D0011648361169__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5D0011648361169_ONTASKBEGIN_OFFSET))(this);
	}
};
