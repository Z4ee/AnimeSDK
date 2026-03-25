#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeIncomingActionCountDown; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_555CC875FD728ACF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D1B210)
#define CLASS_3_555CC875FD728ACF__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1B1E0)

inline static constexpr unsigned int Class_3_555CC875FD728ACF_TypeDefinitionIndex = 43859;

class Class_3_555CC875FD728ACF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeIncomingActionCountDown*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeIncomingActionCountDown* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeIncomingActionCountDown*))((::PBYTE)hIl2Cpp + CLASS_3_555CC875FD728ACF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_555CC875FD728ACF_ONTASKBEGIN_OFFSET))(this);
	}
};
