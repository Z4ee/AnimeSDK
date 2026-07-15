#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartySwitchPerformance; }

#define CLASS_3_1116D84FFFB13384_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188C1050)
#define CLASS_3_1116D84FFFB13384__CTOR_OFFSET UNITYSDK_OFFSET(0x188C1020)

inline static constexpr unsigned int Class_3_1116D84FFFB13384_TypeDefinitionIndex = 51004;

class Class_3_1116D84FFFB13384 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TrainPartySwitchPerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartySwitchPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartySwitchPerformance*))((::PBYTE)hIl2Cpp + CLASS_3_1116D84FFFB13384__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1116D84FFFB13384_ONTASKBEGIN_OFFSET))(this);
	}
};
