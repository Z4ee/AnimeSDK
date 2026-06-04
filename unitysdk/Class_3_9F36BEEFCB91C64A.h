#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnterHipplenGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9F36BEEFCB91C64A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13542B50)
#define CLASS_3_9F36BEEFCB91C64A__CTOR_OFFSET UNITYSDK_OFFSET(0x13542B20)

inline static constexpr unsigned int Class_3_9F36BEEFCB91C64A_TypeDefinitionIndex = 48878;

class Class_3_9F36BEEFCB91C64A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnterHipplenGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterHipplenGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterHipplenGame*))((::PBYTE)hIl2Cpp + CLASS_3_9F36BEEFCB91C64A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F36BEEFCB91C64A_ONTASKBEGIN_OFFSET))(this);
	}
};
