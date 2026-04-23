#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddRegardAsAttackType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_165068B022299F0A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9F4E70)
#define CLASS_3_165068B022299F0A__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F4E40)

inline static constexpr unsigned int Class_3_165068B022299F0A_TypeDefinitionIndex = 50579;

class Class_3_165068B022299F0A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddRegardAsAttackType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddRegardAsAttackType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddRegardAsAttackType*))((::PBYTE)hIl2Cpp + CLASS_3_165068B022299F0A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_165068B022299F0A_ONTASKBEGIN_OFFSET))(this);
	}
};
