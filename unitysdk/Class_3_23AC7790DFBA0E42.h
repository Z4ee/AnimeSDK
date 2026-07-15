#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FindClosestAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_23AC7790DFBA0E42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16FC0980)
#define CLASS_3_23AC7790DFBA0E42__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC0950)

inline static constexpr unsigned int Class_3_23AC7790DFBA0E42_TypeDefinitionIndex = 52573;

class Class_3_23AC7790DFBA0E42 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FindClosestAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FindClosestAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FindClosestAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_23AC7790DFBA0E42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23AC7790DFBA0E42_ONTASKBEGIN_OFFSET))(this);
	}
};
