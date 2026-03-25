#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GroupInitMemberEntityTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D35687484EB5EC0B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC41EE0)
#define CLASS_3_D35687484EB5EC0B__CTOR_OFFSET UNITYSDK_OFFSET(0xAC41EB0)

inline static constexpr unsigned int Class_3_D35687484EB5EC0B_TypeDefinitionIndex = 42826;

class Class_3_D35687484EB5EC0B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GroupInitMemberEntityTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityTransform*))((::PBYTE)hIl2Cpp + CLASS_3_D35687484EB5EC0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D35687484EB5EC0B_ONTASKBEGIN_OFFSET))(this);
	}
};
