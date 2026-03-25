#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowSkillReadyCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E417D4ACF8D1A224_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EF4150)
#define CLASS_3_E417D4ACF8D1A224__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF4120)

inline static constexpr unsigned int Class_3_E417D4ACF8D1A224_TypeDefinitionIndex = 44543;

class Class_3_E417D4ACF8D1A224 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowSkillReadyCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillReadyCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillReadyCamera*))((::PBYTE)hIl2Cpp + CLASS_3_E417D4ACF8D1A224__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E417D4ACF8D1A224_ONTASKBEGIN_OFFSET))(this);
	}
};
