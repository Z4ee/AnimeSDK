#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveEntityFromRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_72E2205B8B893E60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16274A50)
#define CLASS_3_72E2205B8B893E60__CTOR_OFFSET UNITYSDK_OFFSET(0x16274A20)

inline static constexpr unsigned int Class_3_72E2205B8B893E60_TypeDefinitionIndex = 52533;

class Class_3_72E2205B8B893E60 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveEntityFromRelationGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEntityFromRelationGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEntityFromRelationGroup*))((::PBYTE)hIl2Cpp + CLASS_3_72E2205B8B893E60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72E2205B8B893E60_ONTASKBEGIN_OFFSET))(this);
	}
};
