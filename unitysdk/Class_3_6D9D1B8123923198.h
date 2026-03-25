#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcToPlayerDistanceTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6D9D1B8123923198_METHOD_3_C078064DF67F1953_OFFSET UNITYSDK_OFFSET(0x1065E030)
#define CLASS_3_6D9D1B8123923198_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1065DB70)
#define CLASS_3_6D9D1B8123923198__CTOR_OFFSET UNITYSDK_OFFSET(0x1065DB40)

inline static constexpr unsigned int Class_3_6D9D1B8123923198_TypeDefinitionIndex = 42924;

class Class_3_6D9D1B8123923198 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NpcToPlayerDistanceTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_6D9D1B8123923198__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D9D1B8123923198_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_C078064DF67F1953(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_6D9D1B8123923198_METHOD_3_C078064DF67F1953_OFFSET))(this, a1, a2);
	}
};
