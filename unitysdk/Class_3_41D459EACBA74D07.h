#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClockParkTakePhotoReport; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_41D459EACBA74D07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14454150)
#define CLASS_3_41D459EACBA74D07__CTOR_OFFSET UNITYSDK_OFFSET(0x14454120)

inline static constexpr unsigned int Class_3_41D459EACBA74D07_TypeDefinitionIndex = 49292;

class Class_3_41D459EACBA74D07 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClockParkTakePhotoReport*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkTakePhotoReport* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkTakePhotoReport*))((::PBYTE)hIl2Cpp + CLASS_3_41D459EACBA74D07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41D459EACBA74D07_ONTASKBEGIN_OFFSET))(this);
	}
};
