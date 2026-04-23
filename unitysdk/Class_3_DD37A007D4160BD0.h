#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackBoostPointDirty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD37A007D4160BD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97EEAC0)
#define CLASS_3_DD37A007D4160BD0__CTOR_OFFSET UNITYSDK_OFFSET(0x97EEA90)

inline static constexpr unsigned int Class_3_DD37A007D4160BD0_TypeDefinitionIndex = 51297;

class Class_3_DD37A007D4160BD0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackBoostPointDirty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackBoostPointDirty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackBoostPointDirty*))((::PBYTE)hIl2Cpp + CLASS_3_DD37A007D4160BD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD37A007D4160BD0_ONTASKBEGIN_OFFSET))(this);
	}
};
