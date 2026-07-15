#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PerformanceReplay_SetFloorSavedValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8D5BFD92FA23D13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172FF790)
#define CLASS_3_E8D5BFD92FA23D13__CTOR_OFFSET UNITYSDK_OFFSET(0x172FF760)

inline static constexpr unsigned int Class_3_E8D5BFD92FA23D13_TypeDefinitionIndex = 55669;

class Class_3_E8D5BFD92FA23D13 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceReplay_SetFloorSavedValue*))((::PBYTE)hIl2Cpp + CLASS_3_E8D5BFD92FA23D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8D5BFD92FA23D13_ONTASKBEGIN_OFFSET))(this);
	}
};
