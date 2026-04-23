#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckDarkTeamDestroy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D2F8B4021D480E41_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA507D0)
#define CLASS_3_D2F8B4021D480E41_METHOD_3_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0xAA50820)
#define CLASS_3_D2F8B4021D480E41__CTOR_OFFSET UNITYSDK_OFFSET(0xAA507A0)

inline static constexpr unsigned int Class_3_D2F8B4021D480E41_TypeDefinitionIndex = 53453;

class Class_3_D2F8B4021D480E41 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckDarkTeamDestroy*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + CLASS_3_D2F8B4021D480E41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F8B4021D480E41_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F8B4021D480E41_METHOD_3_8A76897D6A693475_OFFSET))(this);
	}
};
