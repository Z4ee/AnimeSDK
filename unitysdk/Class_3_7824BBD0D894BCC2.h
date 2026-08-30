#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RoadRashGameAbility_Charging; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7824BBD0D894BCC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDD9EF70)
#define CLASS_3_7824BBD0D894BCC2__CTOR_OFFSET UNITYSDK_OFFSET(0xDD9EF40)

inline static constexpr unsigned int Class_3_7824BBD0D894BCC2_TypeDefinitionIndex = 58552;

class Class_3_7824BBD0D894BCC2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::Client::RoadRashGameAbility_Charging*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Charging* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Charging*))((::PBYTE)hIl2Cpp + CLASS_3_7824BBD0D894BCC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7824BBD0D894BCC2_ONTASKBEGIN_OFFSET))(this);
	}
};
