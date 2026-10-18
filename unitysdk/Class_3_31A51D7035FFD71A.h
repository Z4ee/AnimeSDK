#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIronTombProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_31A51D7035FFD71A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165BF940)
#define CLASS_3_31A51D7035FFD71A__CTOR_OFFSET UNITYSDK_OFFSET(0x165BF910)

inline static constexpr unsigned int Class_3_31A51D7035FFD71A_TypeDefinitionIndex = 55526;

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
