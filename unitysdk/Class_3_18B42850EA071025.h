#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetMonsterViewPhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_18B42850EA071025_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC80650)
#define CLASS_3_18B42850EA071025__CTOR_OFFSET UNITYSDK_OFFSET(0xBC80620)

inline static constexpr unsigned int Class_3_18B42850EA071025_TypeDefinitionIndex = 55744;

class Class_3_18B42850EA071025 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterViewPhase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterViewPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterViewPhase*))((::PBYTE)hIl2Cpp + CLASS_3_18B42850EA071025__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B42850EA071025_ONTASKBEGIN_OFFSET))(this);
	}
};
