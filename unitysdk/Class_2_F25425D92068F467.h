#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class FastDeliverPuzzleEntityData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropFastDeliverSwitchTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F25425D92068F467_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EC5020)
#define CLASS_2_F25425D92068F467_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EC4690)
#define CLASS_2_F25425D92068F467_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EC4FD0)
#define CLASS_2_F25425D92068F467_TICK_OFFSET UNITYSDK_OFFSET(0x16EC5080)
#define CLASS_2_F25425D92068F467__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC4680)

inline static constexpr unsigned int Class_2_F25425D92068F467_TypeDefinitionIndex = 55745;

class Class_2_F25425D92068F467 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::PropFastDeliverSwitchTarget* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::Client::Prop::FastDeliverPuzzleEntityData* Field_2_4; // 0x38
	::RPG::Client::Prop::FastDeliverPuzzleEntityData* Field_2_5; // 0x40
	::UnityEngine::Vector3 Field_2_6; // 0x48
	::UnityEngine::Vector3 Field_2_7; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverSwitchTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverSwitchTarget*))((::PBYTE)hIl2Cpp + CLASS_2_F25425D92068F467__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F25425D92068F467_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F25425D92068F467_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F25425D92068F467_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F25425D92068F467_TICK_OFFSET))(this, a1);
	}
};
