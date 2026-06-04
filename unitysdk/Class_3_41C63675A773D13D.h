#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAddExtraBattleMonster; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_41C63675A773D13D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3C92D0)
#define CLASS_3_41C63675A773D13D__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C92A0)

inline static constexpr unsigned int Class_3_41C63675A773D13D_TypeDefinitionIndex = 48934;

class Class_3_41C63675A773D13D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAddExtraBattleMonster*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + CLASS_3_41C63675A773D13D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41C63675A773D13D_ONTASKBEGIN_OFFSET))(this);
	}
};
