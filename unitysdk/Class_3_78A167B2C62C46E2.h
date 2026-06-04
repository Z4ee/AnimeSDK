#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableMazeLockTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78A167B2C62C46E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA98BF30)
#define CLASS_3_78A167B2C62C46E2__CTOR_OFFSET UNITYSDK_OFFSET(0xA98BF00)

inline static constexpr unsigned int Class_3_78A167B2C62C46E2_TypeDefinitionIndex = 49331;

class Class_3_78A167B2C62C46E2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableMazeLockTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableMazeLockTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableMazeLockTarget*))((::PBYTE)hIl2Cpp + CLASS_3_78A167B2C62C46E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78A167B2C62C46E2_ONTASKBEGIN_OFFSET))(this);
	}
};
