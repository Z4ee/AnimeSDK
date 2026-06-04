#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopElevationDither; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BCB0A0ACD06CB29D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x143B2310)
#define CLASS_3_BCB0A0ACD06CB29D__CTOR_OFFSET UNITYSDK_OFFSET(0x143B22E0)

inline static constexpr unsigned int Class_3_BCB0A0ACD06CB29D_TypeDefinitionIndex = 49814;

class Class_3_BCB0A0ACD06CB29D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopElevationDither*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopElevationDither* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopElevationDither*))((::PBYTE)hIl2Cpp + CLASS_3_BCB0A0ACD06CB29D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCB0A0ACD06CB29D_ONTASKBEGIN_OFFSET))(this);
	}
};
