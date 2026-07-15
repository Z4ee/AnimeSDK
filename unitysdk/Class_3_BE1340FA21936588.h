#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshWeaknessUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BE1340FA21936588_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F925D0)
#define CLASS_3_BE1340FA21936588__CTOR_OFFSET UNITYSDK_OFFSET(0x16F925A0)

inline static constexpr unsigned int Class_3_BE1340FA21936588_TypeDefinitionIndex = 52792;

class Class_3_BE1340FA21936588 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshWeaknessUI*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshWeaknessUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshWeaknessUI*))((::PBYTE)hIl2Cpp + CLASS_3_BE1340FA21936588__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE1340FA21936588_ONTASKBEGIN_OFFSET))(this);
	}
};
