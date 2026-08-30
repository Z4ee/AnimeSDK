#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GroupInitMemberEntityPropState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B0879E88C7870C98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB402DC0)
#define CLASS_3_B0879E88C7870C98__CTOR_OFFSET UNITYSDK_OFFSET(0xB402D90)

inline static constexpr unsigned int Class_3_B0879E88C7870C98_TypeDefinitionIndex = 53193;

class Class_3_B0879E88C7870C98 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GroupInitMemberEntityPropState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityPropState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityPropState*))((::PBYTE)hIl2Cpp + CLASS_3_B0879E88C7870C98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B0879E88C7870C98_ONTASKBEGIN_OFFSET))(this);
	}
};
