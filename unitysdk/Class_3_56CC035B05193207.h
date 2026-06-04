#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvOverrideCameraModuleConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_56CC035B05193207_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC762E0)
#define CLASS_3_56CC035B05193207__CTOR_OFFSET UNITYSDK_OFFSET(0xAC762B0)

inline static constexpr unsigned int Class_3_56CC035B05193207_TypeDefinitionIndex = 51257;

class Class_3_56CC035B05193207 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvOverrideCameraModuleConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + CLASS_3_56CC035B05193207__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56CC035B05193207_ONTASKBEGIN_OFFSET))(this);
	}
};
