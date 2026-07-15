#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReShaEasterEggStateListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_37B23531290BB275_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C72AC0)
#define CLASS_3_37B23531290BB275__CTOR_OFFSET UNITYSDK_OFFSET(0x17C72A90)

inline static constexpr unsigned int Class_3_37B23531290BB275_TypeDefinitionIndex = 50772;

class Class_3_37B23531290BB275 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReShaEasterEggStateListener*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReShaEasterEggStateListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReShaEasterEggStateListener*))((::PBYTE)hIl2Cpp + CLASS_3_37B23531290BB275__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37B23531290BB275_ONTASKBEGIN_OFFSET))(this);
	}
};
