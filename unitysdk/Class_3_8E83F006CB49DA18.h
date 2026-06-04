#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTeamLocationIndexType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E83F006CB49DA18_EVALUATE_OFFSET UNITYSDK_OFFSET(0x137D36B0)
#define CLASS_3_8E83F006CB49DA18__CTOR_OFFSET UNITYSDK_OFFSET(0x137D3680)

inline static constexpr unsigned int Class_3_8E83F006CB49DA18_TypeDefinitionIndex = 51128;

class Class_3_8E83F006CB49DA18 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTeamLocationIndexType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + CLASS_3_8E83F006CB49DA18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E83F006CB49DA18_EVALUATE_OFFSET))(this);
	}
};
