#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtBattleSetCameraMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9F26BE1B68BDC20C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C8A470)
#define CLASS_3_9F26BE1B68BDC20C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8A440)

inline static constexpr unsigned int Class_3_9F26BE1B68BDC20C_TypeDefinitionIndex = 51686;

class Class_3_9F26BE1B68BDC20C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtBattleSetCameraMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleSetCameraMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleSetCameraMode*))((::PBYTE)hIl2Cpp + CLASS_3_9F26BE1B68BDC20C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F26BE1B68BDC20C_ONTASKBEGIN_OFFSET))(this);
	}
};
