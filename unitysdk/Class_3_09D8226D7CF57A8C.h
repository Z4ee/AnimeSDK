#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddEntityToRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09D8226D7CF57A8C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13D2B780)
#define CLASS_3_09D8226D7CF57A8C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D2B750)

inline static constexpr unsigned int Class_3_09D8226D7CF57A8C_TypeDefinitionIndex = 51421;

class Class_3_09D8226D7CF57A8C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddEntityToRelationGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddEntityToRelationGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddEntityToRelationGroup*))((::PBYTE)hIl2Cpp + CLASS_3_09D8226D7CF57A8C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D8226D7CF57A8C_ONTASKBEGIN_OFFSET))(this);
	}
};
