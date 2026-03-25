#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIronTombProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31A51D7035FFD71A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x117DDB80)
#define CLASS_3_31A51D7035FFD71A__CTOR_OFFSET UNITYSDK_OFFSET(0x117DDB50)

inline static constexpr unsigned int Class_3_31A51D7035FFD71A_TypeDefinitionIndex = 44468;

class Class_3_31A51D7035FFD71A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetIronTombProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIronTombProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIronTombProgress*))((::PBYTE)hIl2Cpp + CLASS_3_31A51D7035FFD71A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31A51D7035FFD71A_ONTASKBEGIN_OFFSET))(this);
	}
};
