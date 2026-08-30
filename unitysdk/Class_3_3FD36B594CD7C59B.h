#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddRegardAsSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3FD36B594CD7C59B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AF40100)
#define CLASS_3_3FD36B594CD7C59B__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF400D0)

inline static constexpr unsigned int Class_3_3FD36B594CD7C59B_TypeDefinitionIndex = 55029;

class Class_3_3FD36B594CD7C59B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddRegardAsSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddRegardAsSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddRegardAsSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_3FD36B594CD7C59B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FD36B594CD7C59B_ONTASKBEGIN_OFFSET))(this);
	}
};
