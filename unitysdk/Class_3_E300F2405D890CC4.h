#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RelateTimeRewindTargetMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E300F2405D890CC4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA5640)
#define CLASS_3_E300F2405D890CC4__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA5610)

inline static constexpr unsigned int Class_3_E300F2405D890CC4_TypeDefinitionIndex = 53641;

class Class_3_E300F2405D890CC4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RelateTimeRewindTargetMaterial*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RelateTimeRewindTargetMaterial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RelateTimeRewindTargetMaterial*))((::PBYTE)hIl2Cpp + CLASS_3_E300F2405D890CC4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E300F2405D890CC4_ONTASKBEGIN_OFFSET))(this);
	}
};
