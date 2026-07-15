#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvStopTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9191E29198A7A0D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x176F65C0)
#define CLASS_3_9191E29198A7A0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6590)

inline static constexpr unsigned int Class_3_9191E29198A7A0D0_TypeDefinitionIndex = 55322;

class Class_3_9191E29198A7A0D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvStopTickValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvStopTickValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvStopTickValue*))((::PBYTE)hIl2Cpp + CLASS_3_9191E29198A7A0D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9191E29198A7A0D0_ONTASKBEGIN_OFFSET))(this);
	}
};
